#include<stdio.h> 
#include<stdlib.h>

int main()
{
	printf("By Penxil\n����˵����\n����һ����ĸ�����ƶ�һ��\n������������\n����w����\n����s����\n����a����\n����d����\n������Ϻ���س�\n",0); 
	system("pause");
	system("cls");
	char a;
	int i,j,u,x=10,y=10,shape[25][25];
    while(1)
	{
		switch(a)
		{
			case 'w':
			{
				y--;break;
			}
			case 's':
			{
				y++;break;
			}
			case 'a':
			{
				x--;break;
			}
			case 'd':
			{
				x++;break;
			}
			default:break;
	    }
	    x<=24?:x=24;
	    x>=0?:x=0;
	    y<=24?:y=24;
	    y>=0?:y=0;
	    printf("x=%d\ny=%d\n",x+1,y+1);
		printf("��",0);
		for(u=0;u<=24;u++)
		{
			printf("��");
		}
		printf("��\n",0);		
		for(j=0;j<=24;j++)
		{
			printf("��",0);			
			for(i=0;i<=24;i++)
			{
				if(x==i&&y==j)
				{
					printf("��",0);
				}
				else
				{
					printf("  ",0);
				}	
			};
			printf("��\n",0);
		}
		printf("��",0);
		for(u=0;u<=24;u++)
		{
			printf("��");
		}
		printf("��\ncode=",0);
		scanf("%c",&a);
		system("cls");
    }
}


/*
�����Щ��Щ��Щ���
��  ��  ��  ��  �� 
�����੤�੤�੤��
��  ��  ��  ��  ��
�����੤�੤�੤��
��  ��  ��  ��  ��
�����ة��ة��ة���
*/ 
