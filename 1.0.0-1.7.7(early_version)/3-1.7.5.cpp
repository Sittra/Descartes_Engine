#include<stdio.h> 
#include<stdlib.h>
#include <conio.h>

int first(void);
int about(void);
int talk(void);
int win(void);
int m_key(int m_key_n);



int main()
{
	first();
	while(1)
	{					
    	/*���⻭���ʼ��*/
    	char first_a='0',start_n=0;
    	int first_n=1,first_n_b=1,first_f=0;
		int first_s=0;
	
    	/*���⻭������ʽ*/ 
    	while(1)
    	{
    		while(first_f<=0)
	    	{
        		system("cls");
	    		switch(first_a)
        		{
    	    		case 'w':
	        		{
    	    			first_n--;break;
	        		}
            		case 's':
    	    		{
	        			first_n++;break;
	        		}
	        		case 'j':
	        		{
	        			printf("\a");
						switch(first_n)
	        			{
	        				case 1:start_n=1;break;
	        				case 2:about();break;
	        				case 3:talk();break;
	        				case 4:return 0;
	        				default:break;
	    				}
	    				break;
	    			}
	        		default:break;
	            }
	        	
	        	/*��Ϸ��ʼģ��1*/
    	    	if(start_n==1)
    	    	{
					break;
				}
	        	
				/*����ƶ���Ե�ж�*/
				first_a='0';
	        	if(first_n<1)
	        	{
	        		first_n=1;
	    		}
	    		if(first_n>4)
	    		{
	    			first_n=4;
	    		}
	    		
	    		/*���˵���ʾģ��*/ 
	    		m_key(first_n);
	    		
	    		
	        	if(kbhit())
    	    	{
    		    	first_a=getch();
    	    		first_f=0;
    	    	}
    			first_f++;
    		}
	        /*��Ϸ��ʼģ��2*/
    	    if(start_n==1)
    	    {
				start_n=0;
				break;
			}
			
			if(kbhit())
    	    {
    		   	first_a=getch();
    	    	first_f=0;
    	    }
			if(first_s)
			{
				first_s=0;
				break;
			}	
    	} 

    	/*��Ϸ��ʽ��ʼ��*/
    	register char a='w';
    	int dbug=0,break_n=0;
    	int o_n=0,s_n=0;
    	int i,j,u,x=0,xb=0,y=21,yb=21,pd=12; 
    	int io=0,jo=0;
    	register int shape[25][25]={
    	{1,10,10,10,2,1,10,10,10,2,0,0,0,1,10,10,10,5,10,10,10,10,10,10,2},
    	{11,0,0,0,11,11,0,0,0,4,10,2,0,11,0,0,0,11,0,0,0,0,0,0,11},
    	{11,0,11,0,11,0,0,0,0,0,0,11,0,11,0,11,0,11,0,11,0,1,2,0,11},
    	{11,0,8,10,3,0,1,7,2,0,0,11,0,11,0,11,0,11,0,11,0,11,11,0,11},
    	{11,0,11,0,0,0,11,0,0,0,0,11,0,11,0,11,0,8,10,3,0,11,11,0,11},
    	{11,0,11,0,10,10,7,10,10,2,0,11,0,11,0,11,0,11,0,0,0,11,11,0,11},
    	{11,0,11,0,0,0,0,0,0,11,0,11,0,0,0,11,0,11,0,11,0,11,11,0,11},
    	{11,0,8,5,10,10,10,2,0,11,0,4,10,10,10,6,0,11,0,11,0,11,11,0,11},
    	{11,0,0,11,0,0,0,11,0,11,0,0,0,0,0,11,0,11,0,11,0,11,11,0,11},
    	{11,0,0,11,0,11,0,11,0,8,10,5,10,10,0,11,0,11,0,11,0,11,11,0,11},
    	{11,0,0,0,0,11,0,11,0,11,0,11,0,0,0,11,0,11,0,11,0,11,11,0,11},
    	{8,10,10,2,0,11,0,0,0,11,0,11,0,1,10,3,0,11,0,11,0,11,11,0,11},
    	{11,0,0,11,0,8,10,10,10,3,0,0,0,11,0,0,0,0,0,11,0,11,11,0,11},
    	{11,0,10,6,0,11,0,0,0,0,0,10,10,7,5,10,10,0,1,6,0,11,11,0,11},
    	{11,0,0,11,0,4,10,2,0,11,0,0,0,0,11,0,0,0,11,11,0,11,11,0,11},
    	{8,10,0,11,0,0,0,11,0,11,0,1,10,10,3,0,10,10,6,11,0,11,11,0,11},
    	{11,0,0,9,10,2,0,11,0,11,0,4,10,5,10,0,0,0,11,11,0,11,11,0,11},
    	{8,10,0,0,0,11,0,11,0,0,0,0,0,11,0,0,11,0,11,11,0,11,11,0,11},
    	{11,0,0,11,0,11,0,8,10,5,10,2,0,11,0,10,6,0,11,11,0,11,11,0,11},
    	{11,0,0,11,0,0,0,11,0,11,0,11,0,11,0,0,11,0,11,11,0,11,11,0,11},
    	{8,10,10,3,0,11,0,11,0,11,0,11,0,4,10,10,3,0,11,11,0,11,11,0,11},
    	{0,0,0,0,0,11,0,11,0,11,0,0,0,0,0,0,0,0,11,11,0,11,11,0,11},
    	{8,10,10,10,10,3,0,11,0,4,10,10,10,10,0,10,10,10,3,11,0,11,11,0,11},
    	{11,0,0,0,0,0,0,11,0,0,0,0,0,0,0,0,0,0,0,11,0,11,11,0,11},
    	{4,10,10,10,10,10,10,7,10,10,10,10,10,10,10,10,10,10,10,7,10,3,4,10,3}} ;//ͼ������ 
    	register int shape_b[25][25];
        register int object_b[3][2]={{1,9},{11,14},{23,2}};
    	register int object[3][2]={{1,9},{11,14},{23,2}};
    	register int key[3][2]={{1,8},{12,14},{23,23}},key_n[3]={0,0,0},key_num=0,key_num_b=0;
    	int ik=0;

    	/*��Ϸ��ѭ��*/ 
    	while(1)
    	{
        	while(s_n<=0)//ˢ��ѭ�� 
        	{		
        		system("cls");
        		/*��״̬����*/ 
        		xb=x;
        		yb=y;
	        	for(io=0;io<=2;io++)
	        	{
    	    		object_b[io][0]=object[io][0];
    	    		object_b[io][1]=object[io][1];
        		}
		
        		/*�����˶�����ģ��*/ 
        		switch(a)
        		{
        			case 'w':
	        		{
        				y--;pd=12;break;
	        		}
            		case 's':
        			{
	        			y++;pd=13;break;
	        		}
	    	    	case 'a':
	        		{
	        			x--;pd=14;break;
	        		}
	        		case 'd':
	        		{
	        			x++;pd=15;break;
	        		}
	        		case 'k':
	        		{
	        			break_n=1;break;
					}
	        		case '1':
	        		{
	        			dbug=dbug==1?0:1;break;
	        		}
	        		case '2':
	        		{
	        			dbug=dbug==2?0:2;break;
					}
	        		default:break;
	            }
    	    	
				/*��Ϸ�˳�ģ��1*/
    	    	if(break_n==1)
    	    	{
					break;
				}
		
	        	/*�����˶�����ģ��*/ 
	        	x<=24?:x=24;
	            x>=0?:x=0;
	            y<=24?:y=24;
	            y>=0?:y=0;
	            if(shape[y][x]!=0&&shape[y][x]!=-1&&shape[y][x]!=-2&&shape[y][x]!=-3)
    	        {
    	        	x=xb;
	            	y=yb;
    	    	}
	    
        		for(io=0;io<=2;io++)
    	        {
	        		if(x==object[io][0]&&y==object[io][1])
	        		{
	        			object[io][0]+=x-xb;
        				object[io][1]+=y-yb;
	        			o_n=io;
	        		}
	            }
	            if (o_n!=-1&&shape[object[o_n][1]][object[o_n][0]]!=0&&shape[object[o_n][1]][object[o_n][0]]!=-3)
        	    {
	            	x=xb;
	            	y=yb;
	            	object[o_n][0]=object_b[o_n][0];
	            	object[o_n][1]=object_b[o_n][1];
	        		o_n=-1;	    	
	        	}
	    	   
	            /*����װ����ͼ������*/ 
        		for(io=0;io<=2;io++)
        		{
	        		shape[object_b[io][1]][object_b[io][0]]=0;
	        		shape[object[io][1]][object[io][0]]=-1;
	        	} 
	        	for(ik=0;ik<=2;ik++)//��ռ���ж����ж� 
	        	{
	        		switch(shape[key[ik][1]][key[ik][0]])
	        		{
	        			case 0:shape[key[ik][1]][key[ik][0]]=-3;key_n[ik]=0;break;
	    				case -1:shape[key[ik][1]][key[ik][0]]=-2;key_n[ik]=1;break;
	    				case -2:shape[key[ik][1]][key[ik][0]]=-2;key_n[ik]=1;break;
	    				case -3:shape[key[ik][1]][key[ik][0]]=-3;key_n[ik]=0;break;
	        			default:break;
		    		}
	    		}
	    		shape[yb][xb]=0;
	        	shape[y][x]=pd;
	    	
	    		/*��ռ���ж����¼*/ 
	    		key_num=0;
	    		for(ik=0;ik<=2;ik++)
	    		{
	    			if(key_n[ik]==1)
	    			{
	    				key_num++;
	    			}
	    		}
	    		if(key_num_b!=key_num)
	    		{
	    			printf("\a");
				}
	    		key_num_b=key_num;
			 


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
	    	    		if(dbug==2)
	    	    		{
	    	    			printf("%-2d",shape[j][i]);
						}
						if(dbug!=2)
						switch(shape[j][i])
		        		{
		    	    		case -3:printf("��",0);break;
		    				case -2:printf("��",0);break;
		    				case -1:printf("��",0);break;
		    	    		case 0:printf("  ",0);break;
		    	    		case 1:printf("��",0);break;
		    	    		case 2:printf("��",0);break;
		    	    		case 3:printf("��",0);break;
		    	    		case 4:printf("��",0);break;
			        		case 5:printf("��",0);break;
		    	    		case 6:printf("��",0);break;
			        		case 7:printf("��",0);break;
		        			case 8:printf("��",0);break;    
	        				case 9:printf("��",0);break;
		        			case 10:printf("��",0);break;
		        			case 11:printf("��",0);break;
		        			case 12:printf("��",0);break;
	        				case 13:printf("��",0);break;
	        				case 14:printf("��",0);break;
	        				case 15:printf("��",0);break;
	        				default:printf("��",0);break;
	        			}	
	        		};
	        		printf("��\n",0);
	        	}
	        	printf("��",0);
	        	for(u=0;u<=24;u++)
	        	{
	        		printf("��");
	        	}
	        	printf("��\n",0);
		    	printf("key_num:%d\n",key_num);	
				printf("��K�������˵�\n",0)	;
				
    			/*����̨��Ϣ�������*/ 
				if(dbug==1||dbug==2)
   				{
					printf("char_a=%c\n",a);
					printf("x=%-4d y=%-4d\n",x+1,y+1);
				    for(io=0;io<=2;io++)
				    {
    			    	printf("object_%d_x=%-4d object_%d_y=%-4d\n",io+1,object[io][0]+1,io+1,object[io][1]+1);
				   	}
				   	printf("key_num:%d\n",key_num);
				   	printf("key_n[]={%d,%d,%d}\n",key_n[0],key_n[1],key_n[2]);
				}
	
    	    	/*�����ж�*/
    	    	if(key_num==3)
    	    	{
					win();
					break_n=1;
					break;
				} 
				
				/*����ģ��*/
    	    	//scanf("%c",&a);	
				//a=getche();
				if(kbhit())
	        	{
		        	a=getch();
	        		s_n=0;
	        	}
	        	s_n++;
            }
           	
			/*��Ϸ�˳�ģ��2*/
    	    if(break_n==1)
    	    {
    	   		break_n=0;
				break;
			}
            
            
			if(kbhit())
	        {
		       	a=getch();
	        	s_n=0;
	        }
        }        
    }
}


int first(void)
{
    printf("By Penxil\n����˵����\n��W����\n��S����\n��A����\n��D����\n��Jȷ��\n��K����\n�� 1/2 ���� ����̨/��ȫ����ģʽ\n",0); 
	system("pause");
	system("cls");
}


 /*���ڽ���*/ 
int about(void)
{
        printf("������������������������������������������������������\n",0);
		printf("��               ����Penxil��������                 ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��           Powered by Descartes Engine            ��\n",0);
	  	printf("��            �ɵѿ��������ṩ����֧��              ��\n",0);
		printf("��                 Penx.com 2017                    ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                            v1.7.5��\n",0);
		printf("������������������������������������������������������\n",0);
		getch();
		system("cls");
		return 0;
}


/*˵������*/
int talk()
{
        	printf("������������������������������������������������������\n",0);
		    printf("��                                                  ��\n",0);
		    printf("��          ����˵����                              ��\n",0);
			printf("��               ��W����                            ��\n",0);
			printf("��               ��S����                            ��\n",0);
			printf("��               ��A����                            ��\n",0);
			printf("��               ��D����                            ��\n",0);
			printf("��               ��Jȷ��                            ��\n",0);
			printf("��               ��K����                            ��\n",0);
			printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
		   	printf("��                                                  ��\n",0);
		   	printf("��                                                  ��\n",0);
		   	printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
		   	printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
	  		printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
			printf("��                                                  ��\n",0);
			printf("������������������������������������������������������\n",0);
			getch();
			system("cls");
			return 0;
}

int win()
{
	    system("cls");
		printf("������������������������������������������������������\n",0);
	    printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��    ������������������������������������������    ��\n",0);
	   	printf("��    ��  Ŷ��Ȼ����������ʵҲûʲô�˲����  ��    ��\n",0);
	   	printf("��    ������������������������������������������    ��\n",0);
	   	printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
	   	printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
	  	printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                                                  ��\n",0);
		printf("��                            �밴������������˵�  ��\n",0);
		printf("������������������������������������������������������\n",0);
		getch();
}

int m_key(int m_key_n)
{
	switch(m_key_n)
    {
	   	case 1:
			{
				printf("������������������������������������������������������\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                  ��������������                  ��\n",0);
		    	printf("��                  ��  ��  ʼ  ��                  ��\n",0);
		    	printf("��                  ��������������                  ��\n",0);
		    	printf("��                      ��  ��                      ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                      ˵  ��                      ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                      ��  ��                      ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
			   	printf("��                                                  ��\n",0);
			    printf("��                                                  ��\n",0);
				printf("��                                                  ��\n",0);
				printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		   		printf("��                                                  ��\n",0);
		   		printf("��                                                  ��\n",0);
		   		printf("������������������������������������������������������\n",0);
		   		break;
		   	}
		case 2:
		   	{
				printf("������������������������������������������������������\n",0);
				printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
			    printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
			    printf("��                                                  ��\n",0);
			    printf("��                                                  ��\n",0);
		    	printf("��                      ��  ʼ                      ��\n",0);
		    	printf("��                  ��������������                  ��\n",0);
		    	printf("��                  ��  ��  ��  ��                  ��\n",0);
		    	printf("��                  ��������������                  ��\n",0);
		    	printf("��                      ˵  ��                      ��\n",0);
	    		printf("��                                                  ��\n",0);
    			printf("��                      ��  ��                      ��\n",0);
			  	printf("��                                                  ��\n",0);
				printf("��                                                  ��\n",0);
			    printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
	    		printf("��                                                  ��\n",0);
    			printf("��                                                  ��\n",0);
			    printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
	    		printf("������������������������������������������������������\n",0);
		    	break;
		    }
		case 3:
	    	{
		    	printf("������������������������������������������������������\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
	    		printf("��                                                  ��\n",0);
    			printf("��                                                  ��\n",0);
				printf("��                                                  ��\n",0);
				printf("��                                                  ��\n",0);
				printf("��                      ��  ʼ                      ��\n",0);
			    printf("��                                                  ��\n",0);
		    	printf("��                      ��  ��                      ��\n",0);
	    		printf("��                  ��������������                  ��\n",0);
    			printf("��                  ��  ˵  ��  ��                  ��\n",0);
				printf("��                  ��������������                  ��\n",0);
				printf("��                      ��  ��                      ��\n",0);
			    printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
	    		printf("��                                                  ��\n",0);
    			printf("��                                                  ��\n",0);
				printf("��                                                  ��\n",0);
				printf("��                                                  ��\n",0);
			    printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
	    		printf("��                                                  ��\n",0);
	    		printf("������������������������������������������������������\n",0);
		    	break;
		    }
	    case 4:
	    	{
		    	printf("������������������������������������������������������\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                      ��  ʼ                      ��\n",0);
		    	printf("��                                                  ��\n",0);
		    	printf("��                      ��  ��                      ��\n",0);
		    	printf("��                                                  ��\n",0);
			    printf("��                      ˵  ��                      ��\n",0);
	    		printf("��                  ��������������                  ��\n",0);
	    		printf("��                  ��  ��  ��  ��                  ��\n",0);
	    		printf("��                  ��������������                  ��\n",0);
	    		printf("��                                                  ��\n",0);
	    		printf("��                                                  ��\n",0);
	    		printf("��                                                  ��\n",0);
    			printf("��                                                  ��\n",0);
		    	printf("��                                                  ��\n",0);
    			printf("��                                                  ��\n",0);
    			printf("��                                                  ��\n",0);
    			printf("��                                                  ��\n",0);
	    		printf("������������������������������������������������������\n",0);
	    		break;
	    	}
	}
	return 0;
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