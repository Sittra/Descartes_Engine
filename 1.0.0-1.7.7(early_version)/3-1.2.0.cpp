#include<stdio.h> 
#include<stdlib.h>

int first(void);
int before(void);

int main()
{
	first();
	char a;
	int i,j,u,x=12,xb,y=12,yb; 
	int io,jo;
	int shape[25][25];
    int object_b[3][2];
	int object[][2]={{13,9},{2,20},{17,17}};
	while(1)
	{
		/*��״̬����*/ 
		xb=x;
		yb=y;
		
		/*����ģ��*/ 
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
	    for(io=0;io<=2;io++)
	    {
			if(x==object[io][0]&&y==object[io][1])
			{
				object[io][0]+=x-xb;
				object[io][1]+=y-yb;
			}
	    }
	    
	    /*������Ϣ���*/ 
		printf("x=%d y=%d\n",x+1,y+1);
		for(io=0;io<=2;io++)
		{
			printf("object_%d_x=%d object_%d_y=%d\n",io+1,object[io][0]+1,io+1,object[io][1]+1);
		}

		/*��Ļɨ��*/ 
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
				if(i==x&&j==y)
				{
					printf("��",0);
				}
				else if((object[0][0]==i&&object[0][1]==j)||(object[1][0]==i&&object[1][1]==j)||(object[2][0]==i&&object[2][1]==j))
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


int first(void)
{
    printf("By Penxil\n����˵����\n����һ����ĸ�����ƶ�һ��\n������������\n����w����\n����s����\n����a����\n����d����\n������Ϻ���س�\n",0); 
	system("pause");
	system("cls");
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
