#include <io.h>
#include <stdio.h>
#include<stdlib.h>
#include<conio.h> 


FILE* pf_path_file;
// ����lp_pathĿ¼������Ŀ¼�����ļ��������浽���out_file_name
int find_path_save_file(const char* lp_path , const char* out_file_name)
{
    pf_path_file = fopen(out_file_name, "w");
    int cnt = find_path(lp_path);
    fclose(pf_path_file);
    return cnt;
}
 
// ��������Ŀ¼
int find_path(const char* lp_path)
{
    static int cnt = 0;
    HANDLE hFile;  // windows���ļ��Ĳ�������Ҫ�õ�һ���ļ����
    FILETIME ft;  SYSTEMTIME st; // �ļ�ʱ�� �� ϵͳʱ��
    WIN32_FIND_DATAA wfd;  // WIN32_FIND_DATAA ��windows����Ĳ����ļ��Ľṹ
    char sz_path[MAX_PATH] = {0};
    char buf[MAX_PATH * 2 ] = {0};
    strcpy(sz_path, lp_path);
    strcat(sz_path, "\\*.*");
    hFile = FindFirstFile(sz_path, &wfd);  // FindFirstFile��������һ���ļ���sz_path��Ҫ���ҵ��ļ�����������ȫ·�������·����Ҳ����дͨ������硰c:/*.*��
 
    if (hFile != INVALID_HANDLE_VALUE) {
        while (FindNextFile(hFile, &wfd)) {  // ���õ�һ���ҵ����ļ����������Ѱ���¸��ļ�������ҵ��¸��ļ����������wfd�ṹ��������true
            if (wfd.cFileName[0] == '.') continue; // . ��ǰĿ¼ .. �ϼ�Ŀ¼����  ����ȥ
 
            if (wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) { // �жϣ��ó��ҵ����ļ����Ƿ���һ���ļ��У�����ǣ���ݹ���ò��Һ������ɴ�ʵ�����ȫ�ļ�������
                strcpy(sz_path, lp_path);
                strcat(sz_path, "\\");
                strcat(sz_path, wfd.cFileName);
                find_path(sz_path);   // ���õݹ����
 
            } else {
                ft = wfd.ftLastWriteTime;
                FileTimeToSystemTime(&ft, &st);
 
                sprintf(buf , "%d-%02d-%02d  %02d:%02d  %10u | ", st.wYear, st.wMonth, st.wDay, st.wHour + 8, st.wMinute , wfd.nFileSizeLow); //
                sprintf(buf + 32, "%s | %s", wfd.cFileName , lp_path);
 
                fprintf(pf_path_file , "%s\n" , buf);    ++cnt;   // �����¼out_file_name �� ���ر���ļ�¼��
            }
        }
    }
    return cnt;
}
