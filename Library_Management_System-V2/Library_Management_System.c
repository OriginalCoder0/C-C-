/**********Դ�������**********/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LONG sizeof(struct Book)
struct Book
{
	char title[100];
	char author[50];
	char press[100];
	char year[5];
	char claim_number[30];
	int collection;
	int can_borrow;
	char unit_price[10];
	char student_name[50];
	char sex[5];
	char student_id[20];
	long long int number;
};

/**********��������**********/
void main_meun();//�������溯����
void manager_menu();//������Ա���ܽ��溯����
void student_meun();//��ѧ�����ܽ��溯����
int book_add(int back);//��������Ϣ¼�뺯����
int search_2(int back);//��ͼ����Ϣ��ѯ��ѧ���棩��
int search_1(int back);//��ͼ����Ϣ��ѯ����������Ա�棩��
int search_number(int back);//������Ų�ѯ����������Ա�棩��
int search_title(int back);//����������ѯ����������Ա�棩��
void search_menu();//��ͼ���ѯ�������棨����Ա�棩��
int book_delete(int back);//��ͼ����Ϣɾ��������
int borrow(int back);//�������������������
int return_book(int back);//������������������

/**********������**********/
int main()
{
	int a,b,c,z;
	int back=0,back2=0,back3=0;
	A:system("cls");//AΪһ����־λ�����ڴ��Ӻ�������������
	back=0;back2=0;back3=0;
	main_meun();//�������溯����
	while(1)//������ѭ������
	{
		scanf("%d",&a);
		switch(a)
		{
		case 1://�������Ա����
			{
				printf("��½���롾123����");
				scanf("%d",&z);
				if(z!=123)goto A;
				B:system("cls");//BΪһ����־λ�����ڴ��Ӻ������ع���Ա���ܽ���
				back=0;back2=0;back3=0;
				manager_menu();//������Ա���ܽ��溯����
				while(1)
				{
					scanf("%d",&b);
					switch(b)
					{
					case 1:{back2=book_add(back2);if(back2==1)goto B;}//����������Ϣ¼��
					case 2:{back2=search_1(back2);if(back2==1)goto B;}//����ͼ����Ϣ��ѯ
					case_3:{back2=book_delete(back2);if(back2==1)goto B;}//����ͼ����Ϣɾ��
					case 4:goto A;//�������˵�
					case 0://�˳�ϵͳ
						{
							system("cls");
							printf(" ------------------------------------------------------------\n");
							printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
							printf(" ------------------------------------------------------------\n");
							exit(0);
						}
					}
				}
			}break;
		case 2://����ѧ������
			{
				C:system("cls");//CΪһ����־λ�����ڴ��Ӻ�������ѧ�����ܽ���
				
				student_meun();//��ѧ�����ܽ��溯����
				while(1)
				{
					scanf("%d",&c);
					switch(c)
					{
					case 1:{ back3=search_2(back3);if(back3==1)goto C; }//����ͼ����Ϣ��ѯ
					case 2:{ back3=borrow(back3);if(back3==1)goto C; }//�����������
					case 3:{ back3=return_book(back3);if(back3==1)goto C; }//����������
					case 4:goto A;//�������˵�
					case 0://�˳�ϵͳ
						{
							system("cls");
							printf(" ------------------------------------------------------------\n");
							printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
							printf(" ------------------------------------------------------------\n");
							exit(0);
						}
					}
				}
			}break;
		case 0://�˳�ϵͳ
			{
				system("cls");
				printf(" ------------------------------------------------------------\n");
				printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
				printf(" ------------------------------------------------------------\n");
				exit(0);
			}
		}
	}
}

/**********��������**********/

void main_meun()//�������溯����
{
	printf(" ============================================================\n");
	printf(" |                                                          |\n");
	printf(" |                   ��ӭʹ��ͼ�����ϵͳ                   |\n");
	printf(" |                                                          |\n");
	printf(" |                                                          |\n");
	printf(" |     [1].����Ա��½    [2].ѧ����½    [0].�˳�ϵͳ       |\n");
	printf(" |                                                          |\n");
	printf(" ============================================================\n");
	printf("��ѡ��");
}

void manager_menu()//������Ա���ܽ��溯����
{
	printf(" ============================================================\n");
	printf(" |                                                          |\n");
	printf(" |                    [1].������Ϣ¼��                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [2].ͼ����Ϣ��ѯ                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [3].ͼ����Ϣɾ��                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [4].�������˵�                        |\n");
	printf(" |                                                          |\n");
	printf(" |                    [0].�˳�ϵͳ                          |\n");
	printf(" |                                                          |\n");
	printf(" ============================================================\n");
	printf("��ѡ��");
}

void student_meun()//��ѧ�����ܽ��溯����
{
    printf(" ============================================================\n");
	printf(" |                                                          |\n");
	printf(" |                    [1].ͼ����Ϣ��ѯ                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [2].�����������                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [3].����������                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [4].�������˵�                        |\n");
	printf(" |                                                          |\n");
	printf(" |                    [0].�˳�ϵͳ                          |\n");
	printf(" |                                                          |\n");
	printf(" ============================================================\n");
	printf("��ѡ��");
}

int book_add(int back)//��������Ϣ¼�뺯����
{
	 FILE *fp;
	 struct Book *p1;
	 long long int a,b;
	 int n;
	 fp=fopen("Books_SQL.txt","a+");
	 if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
	 while(1)
	 {
		A:system("cls");//AΪһ����־λ�����ڷ��ر������׽���
		p1=(struct Book*)malloc(LONG);
		fseek(fp,-11,SEEK_END);
		fscanf(fp,"%lld",&a);
		if(a<0)a=20011001;
		fseek(fp,0,SEEK_END);
		printf("��һ��ͼ���ţ�%lld\n",a);
		printf("��������ͼ����Ϣ��\n");
		printf("===============================================================================\n");
		printf("����                        ����    ������              ��� ��ȡ��   ���� ����\n");	
		printf("-------------------------------------------------------------------------------\n");
		p1->number=a+1;
		strcpy(p1->student_id,"δ֪");
		strcpy(p1->student_name,"δ֪");
		strcpy(p1->sex,"δ֪");
		scanf("%s %s %s %s %s %s %d",p1->title,p1->author,p1->press,p1->year,p1->claim_number,p1->unit_price,&p1->collection);
		p1->can_borrow=p1->collection;
		fprintf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",p1->title,p1->author,p1->press,p1->year,p1->claim_number,p1->unit_price,p1->collection,p1->can_borrow,p1->student_name,p1->sex,p1->student_id,p1->number);
		fflush(fp);
		if(1<p1->collection)
		{
			for(b=2;b<=p1->collection;b++)
			{
				p1->number=a+b;
				fprintf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",p1->title,p1->author,p1->press,p1->year,p1->claim_number,p1->unit_price,p1->collection,p1->can_borrow,p1->student_name,p1->sex,p1->student_id,p1->number);
				fflush(fp);
			}
		}
		printf("\a");
		printf(" -------------------------------------------------------\n");
		printf("            [1].����¼��    [2].����¼��                \n");
		printf(" -------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d",&n);
		switch(n)
		{
		case 1:goto A;
		case 2:{fclose(fp);back=1;return(back);}
		}
	 }
}

int search_2(int back)//������ͼ����Ϣ��ѯ��ѧ���棩��
{
	FILE *fp;
	char title[100];
	struct Book *p;
	int a1=0,b1;
	A:system("cls");//AΪһ����־λ�����ڷ��ر������׽���
	back=0;
	printf("������������");
	scanf("%s",title);
	fp=fopen("ͼ����Ϣ���ݿ�.txt","r");
	if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
	p=(struct Book*)malloc(LONG);
	while(!feof(fp))
		{
			fscanf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",p->title,p->author,p->press,p->year,p->claim_number,p->unit_price,&p->collection,&p->can_borrow,p->student_name,p->sex,p->student_id,&p->number);
			if(strcmp(title,p->title)==0)
				{
					a1=1;			
					printf("===============================================================================\n");
					printf("����                        ����    ������             ���  ��ȡ��   �ݲ� �ɽ�\n");			
					printf("-------------------------------------------------------------------------------\n");			
					printf("%-28s%-8s%-19s%-6s%-11s%-5d%d\n",p->title,p->author,p->press,p->year,p->claim_number,p->collection,p->can_borrow);
					break;
				}
		}
	if(a1==1)
	{
		fclose(fp);
		printf("\n");
		printf(" -------------------------------------------------------\n");
		printf("   [1].��������   [2].����ѧ�����ܲ˵�   [0].�˳�ϵͳ   \n");
		printf(" -------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d",&b1);
		while(1)
		{
			switch(b1)
			{
			case 1:goto A;break;
			case 2:return(back=1);
			case 0:
				{
					system("cls");
					printf(" ------------------------------------------------------------\n");
					printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
					printf(" ------------------------------------------------------------\n");
					exit(0);
				}
			}
		}
	}
	if(a1==0)
	{
		fclose(fp);
		printf("\a \n δ�ҵ������������ͼ�飡\n\n");
		printf(" -------------------------------------------------------\n");
		printf("   [1].��������   [2].����ѧ�����ܲ˵�   [0].�˳�ϵͳ   \n");
		printf(" -------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d",&b1);
		while(1)
		{
			switch(b1)
			{
			case 1:goto A;break;
			case 2:return(back=1);
			case 0:
				{
					system("cls");
					printf(" ------------------------------------------------------------\n");
					printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
					printf(" ------------------------------------------------------------\n");
					exit(0);
				}
			}
		}
	}
}

int search_1(int back)//������ͼ����Ϣ��ѯ����������Ա�棩��
{
	int a,back3;
    A:system("cls");//AΪһ����־λ�����ڷ��ر������׽���
	back=0;back3=0;
	search_menu();
	scanf("%d",&a);
	while(1)
	{
		switch(a)
		{
		case 1:{back3=search_number(back3);if(back3==1)goto A;}//�����Ų�ѯ
		case 2:{back3=search_title(back3);if(back3==1)goto A;}//����������ѯ
		case 3:return(back=1);
		}
	}
}
int search_number(int back)//������Ų�ѯ����������Ա�棩��
{

	FILE *fp;
	long long int number;
	struct Book *p;
	int b1;
	A:system("cls");//AΪһ����־λ�����ڷ��ر������׽���
	back=0;
	printf("������ͼ���ţ����֣���");
	scanf("%lld",&number);
	fp=fopen("ͼ����Ϣ���ݿ�.txt","r");
	if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
	p=(struct Book*)malloc(LONG);
	while(1)
		{
			if(feof(fp))
			{
				fclose(fp);
				printf("\a\n  δ�ҵ������������ͼ�飡\n\n");
				printf(" -------------------------------------------------------\n");
				printf("    [1].��������   [2].������һ���˵�   [0].�˳�ϵͳ    \n");
				printf(" -------------------------------------------------------\n");
				printf("��ѡ��");
				scanf("%d",&b1);
				while(1)
					{
						switch(b1)
						{
						case 1:goto A;break;
						case 2:return(back=1);
						case 0:
							{
								system("cls");
								printf(" ------------------------------------------------------------\n");
								printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
								printf(" ------------------------------------------------------------\n");
								exit(0);
							}
						}
					}
			}
			fscanf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",p->title,p->author,p->press,p->year,p->claim_number,p->unit_price,&p->collection,&p->can_borrow,p->student_name,p->sex,p->student_id,&p->number);
			if(number==p->number)
			{ 
				fclose(fp);		
				printf("===============================================================================\n\n");
				printf(" %-6s%-12lld%-8s%-12s%-6s%-8s%s%s\n\n","��ţ�",p->number,"��ȡ�ţ�",p->claim_number,"��ݣ�",p->year,"���ۣ�",p->unit_price);
				printf(" ������%s\n\n",p->title);
				printf(" %-6s%-12s%s%s\n\n","���ߣ�",p->author,"�����磺",p->press);
				printf(" %-6s%-12d%s%d\n\n","�ݲأ�",p->collection,"�ɽ裺",p->can_borrow);
				printf(" ��������Ϣ||      %-6s%-10s%-6s%-7s%-7s%s\n\n","������",p->student_name,"�Ա�",p->sex,"ѧ�ţ�",p->student_id);			
				printf("===============================================================================\n");
				printf(" -------------------------------------------------------\n");
				printf("    [1].��������   [2].������һ���˵�   [0].�˳�ϵͳ    \n");
				printf(" -------------------------------------------------------\n");
				printf("��ѡ��");
				scanf("%d",&b1);
					while(1)
						{
							switch(b1)
							{
							case 1:goto A;break;
							case 2:return(back=1);
							case 0:
								{
									system("cls");
									printf(" ------------------------------------------------------------\n");
									printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
									printf(" ------------------------------------------------------------\n");
									exit(0);
								}
							}
						}
			}
		}
}

int search_title(int back)//����������ѯ����������Ա�棩��
{
	FILE *fp;
	char title[100];
	struct Book *p;
	int a1,b1;
	A:system("cls");//AΪһ����־λ�����ڷ��ر������׽���
	back=0;
	a1=0;
	printf("������������");
	scanf("%s",title);
	fp=fopen("ͼ����Ϣ���ݿ�.txt","r");
	if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
	p=(struct Book*)malloc(LONG);
	while(!feof(fp))
		{
			fscanf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",p->title,p->author,p->press,p->year,p->claim_number,p->unit_price,&p->collection,&p->can_borrow,p->student_name,p->sex,p->student_id,&p->number);
			if(strcmp(title,p->title)==0)
				{
					a1=1;				
					printf("===============================================================================\n\n");
					printf(" %-6s%-12lld%-8s%-12s%-6s%-8s%s%s\n\n","��ţ�",p->number,"��ȡ�ţ�",p->claim_number,"��ݣ�",p->year,"���ۣ�",p->unit_price);
					printf(" ������%s\n",p->title);
					printf(" %-6s%-12s%s%s\n\n","���ߣ�",p->author,"�����磺",p->press);
					printf(" %-6s%-12d%s%d\n","�ݲأ�",p->collection,"�ɽ裺",p->can_borrow);
					printf(" ��������Ϣ||      %-6s%-10s%-6s%-7s%-7s%s\n\n","������",p->student_name,"�Ա�",p->sex,"ѧ�ţ�",p->student_id);				
					printf("===============================================================================\n");
				}
		}
	if(a1==1)
	{
		fclose(fp);
		printf(" -------------------------------------------------------\n");
		printf("    [1].��������   [2].������һ���˵�   [0].�˳�ϵͳ    \n");
		printf(" -------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d",&b1);
		while(1)
		{
			switch(b1)
			{
			case 1:goto A;break;
			case 2:return(back=1);
			case 0:
				{
					system("cls");
					printf(" ------------------------------------------------------------\n");
					printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
					printf(" ------------------------------------------------------------\n");
					exit(0);
				}
			}
		}
	}
	if(a1==0)
	{
		fclose(fp);
		printf("\a \nδ�ҵ������������ͼ�飡\n\n");
		printf(" -------------------------------------------------------\n");
		printf("    [1].��������   [2].������һ���˵�   [0].�˳�ϵͳ    \n");
		printf(" -------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d",&b1);
		while(1)
		{
			switch(b1)
			{
			case 1:goto A;break;
			case 2:return(back=1);
			case 0:
				{
					system("cls");
					printf(" ------------------------------------------------------------\n");
					printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
					printf(" ------------------------------------------------------------\n");
					exit(0);
				}
			}
		}
	}
}

void search_menu()//��ͼ���ѯ�������棨����Ա�棩��
{
    printf(" ============================================================\n");
	printf(" |                                                          |\n");
	printf(" |                    [1].��ͼ���Ų�ѯ                    |\n");
	printf(" |                                                          |\n");
	printf(" |                    [2].��ͼ�����Ʋ�ѯ                    |\n");
	printf(" |                                                          |\n");
	printf(" |                    [3].������һ���˵�                    |\n");
	printf(" |                                                          |\n");
	printf(" ============================================================\n");
	printf("��ѡ��");
}

int book_delete(int back)//��ͼ����Ϣɾ��������
{
	FILE *fp;
	char title[100],d[100];
	struct Book n[1000];
	int i,j;
	struct Book *p;
	int a,b,c,e,f;
	A:system("cls");//AΪһ����־λ�����ڷ��ر������׽���
	back=0,i=0,j=0,b=0,a=0;
	printf("������������");
	scanf("%s",title);
	fp=fopen("ͼ����Ϣ���ݿ�.txt","r");
	if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
	p=(struct Book*)malloc(LONG);
	while(!feof(fp))
		{
			fscanf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",p->title,p->author,p->press,p->year,p->claim_number,p->unit_price,&p->collection,&p->can_borrow,p->student_name,p->sex,p->student_id,&p->number);
			if(strcmp(title,p->title)==0)
				{
					a=1;
					if(strcmp(p->student_name,"δ֪")!=0)b=1;				
					printf("===============================================================================\n\n");
					printf(" %-6s%-12lld%-8s%-12s%-6s%-8s%s%s\n\n","��ţ�",p->number,"��ȡ�ţ�",p->claim_number,"��ݣ�",p->year,"���ۣ�",p->unit_price);
					printf(" ������%s\n",p->title);
					printf(" %-6s%-12s%s%s\n\n","���ߣ�",p->author,"�����磺",p->press);
					printf(" %-6s%-12d%s%d\n","�ݲأ�",p->collection,"�ɽ裺",p->can_borrow);
					printf(" ��������Ϣ||      %-6s%-10s%-6s%-7s%-7s%s\n\n","������",p->student_name,"�Ա�",p->sex,"ѧ�ţ�",p->student_id);				
					printf("===============================================================================\n");
				}
		}
	fclose(fp);
	if(b==1)
	{
		fclose(fp);
		printf("\a \n\n�������ڳ��裬�޷�ɾ����Ϣ��\n\n");
		printf(" -------------------------------------------------------\n");
		printf("   [1].��������  [2].���ع���Ա���ܲ˵�  [0].�˳�ϵͳ   \n");
		printf(" -------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d",&b);
		while(1)
		{
			switch(b)
			{
			case 1:goto A;break;
			case 2:return(back=1);
			case 0:
				{
					system("cls");
					printf(" ------------------------------------------------------------\n");
					printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
					printf(" ------------------------------------------------------------\n");
					exit(0);
				}
			}
		}
	}
	if(a==1&&b!=1)
	{
		printf("\a\n\n  ȷ��ɾ����\n");
		printf(" -------------------------------------------------------\n");
		printf("                 [1].��      [2].��                     \n");
		printf(" -------------------------------------------------------\n");
		scanf("%d",&c);
		while(1)
		{
			switch(c)
			{
			case 1:
				{
					fp=fopen("ͼ����Ϣ���ݿ�.txt","r");
					if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
					while(!feof(fp))
					{
						fscanf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",&n[i].title,&n[i].author,&n[i].press,&n[i].year,&n[i].claim_number,&n[i].unit_price,&n[i].collection,&n[i].can_borrow,&n[i].student_name,&n[i].sex,&n[i].student_id,&n[i].number);
						if(strcmp(title,n[i].title)==0)
							{						   strcpy(d,n[i].press);strcpy(n[i].press,n[i].title);strcpy(n[i].title,d);
								e=n[i].number/10000;n[i].collection=e;
								f=n[i].number%10000;n[i].can_borrow=f;
								n[i].number=1234567890;
							}
						i+=1;
					}
					j=i;
					fclose(fp);
					fp=fopen("ͼ����Ϣ���ݿ�.txt","w");
					if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
					i=0;
					while(j!=0)
					{
						fprintf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",n[i].title,n[i].author,n[i].press,n[i].year,n[i].claim_number,n[i].unit_price,n[i].collection,n[i].can_borrow,n[i].student_name,n[i].sex,n[i].student_id,n[i].number);
						fflush(fp);
						i+=1;
						j-=1;
					}			
					fclose(fp);
					system("cls");
					printf("  \n ɾ���ɹ���\n\n");
					printf(" -------------------------------------------------------\n");
					printf("   [1].����ɾ��  [2].���ع���Ա���ܲ˵�  [0].�˳�ϵͳ   \n");
					printf(" -------------------------------------------------------\n");
					printf("��ѡ��");
					scanf("%d",&b);
					while(1)
					{
						switch(b)
							{
							case 1:goto A;break;
							case 2:return(back=1);
							case 0:
								{
									system("cls");
									printf(" ------------------------------------------------------------\n");
									printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
									printf(" ------------------------------------------------------------\n");
									exit(0);
								}
							}
					}
				}
			case 2:return(back=1);
			}
		}
	}
	if(a!=1)
	{
		fclose(fp);
		printf("\a \n δ�ҵ������������ͼ�飡\n\n");
		printf(" -------------------------------------------------------\n");
		printf("   [1].��������  [2].���ع���Ա���ܲ˵�  [0].�˳�ϵͳ   \n");
		printf(" -------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d",&b);
		while(1)
		{
			switch(b)
			{
			case 1:goto A;break;
			case 2:return(back=1);
			case 0:
				{
					system("cls");
					printf(" ------------------------------------------------------------\n");
					printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
					printf(" ------------------------------------------------------------\n");
					exit(0);
				}
			}
		}
	}
}

int borrow(int back)//�������������������
{
	FILE *fp;
	char title[100];
	char student_name[50],sex[5],student_id[20];
	struct Book *p,n[1000];
	int a,b,c,d,i,j;
	A:system("cls");//AΪһ����־λ�����ڷ��ر������׽���
	back=0;a=0;b=0;i=0;j=0;d=0;
	printf("������������");
	scanf("%s",title);
	fp=fopen("ͼ����Ϣ���ݿ�.txt","r");
	if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
	p=(struct Book*)malloc(LONG);
	while(!feof(fp))
		{
			fscanf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",p->title,p->author,p->press,p->year,p->claim_number,p->unit_price,&p->collection,&p->can_borrow,p->student_name,p->sex,p->student_id,&p->number);
			if(strcmp(title,p->title)==0)
				{
					a=1;
					if(p->can_borrow!=0)b=1;			printf("===============================================================================\n");
	printf("����                        ����    ������             ���  ��ȡ��   �ݲ� �ɽ�\n");
					printf("-------------------------------------------------------------------------------\n");				printf("%-28s%-8s%-19s%-6s%-11s%-5d%d\n",p->title,p->author,p->press,p->year,p->claim_number,p->collection,p->can_borrow);
					break;
				}
		}
	if(a!=1)
	{
		fclose(fp);
		printf("\a \n �޸�����Ϣ��\n\n");
		printf(" -------------------------------------------------------\n");
		printf("   [1].��������   [2].����ѧ�����ܲ˵�   [0].�˳�ϵͳ   \n");
		printf(" -------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d",&c);
		while(1)
		{
			switch(c)
			{
			case 1:goto A;
			case 2:return(back=1);
			case 0:
				{
					system("cls");
					printf(" ------------------------------------------------------------\n");
					printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
					printf(" ------------------------------------------------------------\n");
					exit(0);
				}
			}
		}
	}
	if(b!=1)
	{
		fclose(fp);
		printf("\a \n �޷�����������������\n\n");
		printf(" -------------------------------------------------------\n");
		printf("   [1].��������   [2].����ѧ�����ܲ˵�   [0].�˳�ϵͳ   \n");
		printf(" -------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d",&c);
		while(1)
		{
			switch(c)
			{
			case 1:goto A;
			case 2:return(back=1);
			case 0:
				{
					system("cls");
					printf(" ------------------------------------------------------------\n");
					printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
					printf(" ------------------------------------------------------------\n");
					exit(0);
				}
			}
		}
	}
	if(b==1)
	{
		printf("\a\n\n �Ƿ����������������\n");
		printf(" -------------------------------------------------------\n");
		printf("                   [1].��      [2].��                   \n");
		printf(" -------------------------------------------------------\n");
		scanf("%d",&c);
		while(1)
		{
			switch(c)
			{
			case 1:
				{
					system("cls");
					printf("��������ĸ�����Ϣ��\n");
					printf(" =======================================================\n");
					printf(" ����       �Ա�   ѧ��                                 \n");
					printf(" -------------------------------------------------------\n");
					scanf("%s %s %s",student_name,sex,student_id);
					fp=fopen("ͼ����Ϣ���ݿ�.txt","r");
					if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
					while(!feof(fp))
					{
						fscanf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",&n[i].title,&n[i].author,&n[i].press,&n[i].year,&n[i].claim_number,&n[i].unit_price,&n[i].collection,&n[i].can_borrow,&n[i].student_name,&n[i].sex,&n[i].student_id,&n[i].number);
						if(strcmp(title,n[i].title)==0)
						{
							if(d!=1&&strcmp(n[i].student_name,"δ֪")==0)
							{
								strcpy(n[i].student_name,student_name);
								strcpy(n[i].sex,sex);
								strcpy(n[i].student_id,student_id);
								d=1;
							}
							n[i].can_borrow-=1;
						}
						i+=1;
					}
					fclose(fp);
					j=i;
					fp=fopen("ͼ����Ϣ���ݿ�.txt","w");
					if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
					i=0;
					while(j!=0)
					{
						fprintf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",n[i].title,n[i].author,n[i].press,n[i].year,n[i].claim_number,n[i].unit_price,n[i].collection,n[i].can_borrow,n[i].student_name,n[i].sex,n[i].student_id,n[i].number);
						fflush(fp);
						i+=1;j-=1;
					}			
					fclose(fp);
					system("cls");
					printf("  \n �������ɹ���\n\n");
					printf(" -------------------------------------------------------\n");
					printf("    [1].��������  [2].����ѧ�����ܲ˵�  [0].�˳�ϵͳ    \n");
					printf(" -------------------------------------------------------\n");
					printf("��ѡ��");
					scanf("%d",&c);
					while(1)
					{
						switch(c)
							{
							case 1:goto A;break;
							case 2:return(back=1);
							case 0:
								{
									system("cls");
									printf(" ------------------------------------------------------------\n");
									printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
									printf(" ------------------------------------------------------------\n");
									exit(0);
								}
							}
					}
				}
			case 2:return(back=1);
			}
		}
	}
}

int return_book(int back)//������������������
{
	FILE *fp;
	char title[100];
	char student_name[50];
	struct Book *p,n[1000];
	int a,b,c,d,i,j;
	A:system("cls");//AΪһ����־λ�����ڷ��ر������׽���
	back=0;a=0;b=0;i=0;j=0;d=0;
	printf("���������������");
	scanf("%s",student_name);
	fp=fopen("ͼ����Ϣ���ݿ�.txt","r");
	if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
	p=(struct Book*)malloc(LONG);
    printf("��Ŀǰ�Ľ��������\n");
	printf("===============================================================================\n");
	printf("����                        ����    ������             ���  ��ȡ��   �ݲ� �ɽ�\n");
	printf("-------------------------------------------------------------------------------\n");
	while(!feof(fp))
		{
			fscanf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",p->title,p->author,p->press,p->year,p->claim_number,p->unit_price,&p->collection,&p->can_borrow,p->student_name,p->sex,p->student_id,&p->number);
			if(strcmp(student_name,p->student_name)==0)
				{
					a=1;
	printf("%-28s%-8s%-19s%-6s%-11s%-5d%d\n",p->title,p->author,p->press,p->year,p->claim_number,p->collection,p->can_borrow);
					printf("-------------------------------------------------------------------------------\n");
				}
		}
	fclose(fp);
	if(a!=1)
	{
		printf("��Ŀǰû�н����¼��\n");
		printf(" -------------------------------------------------------\n");
		printf("          [1].����ѧ�����ܲ˵�   [0].�˳�ϵͳ           \n");
		printf(" -------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d",&c);
		while(1)
		{
			switch(c)
			{
			case 1:return(back=1);
			case 0:
				{
					system("cls");
					printf(" ------------------------------------------------------------\n");
					printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
					printf(" ------------------------------------------------------------\n");
					exit(0);
				}
			}
		}
	}
	if(a==1)
	{
		printf("\n����������ͼ��������ÿ��һ�֣���");
		scanf("%s",title);
		printf("\a\n\n �Ƿ�ȷ�ϰ�����黹��������\n");
		printf(" -------------------------------------------------------\n");
		printf("                   [1].��      [2].��                   \n");
		printf(" -------------------------------------------------------\n");
		printf("�����룺");
		scanf("%d",&c);
		while(1)
		{
			switch(c)
			{
			case 1:
				{
					system("cls");
					fp=fopen("ͼ����Ϣ���ݿ�.txt","r");
					if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
					while(!feof(fp))
					{
						fscanf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",&n[i].title,&n[i].author,&n[i].press,&n[i].year,&n[i].claim_number,&n[i].unit_price,&n[i].collection,&n[i].can_borrow,&n[i].student_name,&n[i].sex,&n[i].student_id,&n[i].number);
						if(strcmp(title,n[i].title)==0)
						{
						if(strcmp(n[i].student_name,student_name)==0)
							{
								strcpy(n[i].student_name,"δ֪");
								strcpy(n[i].sex,"δ֪");
								strcpy(n[i].student_id,"δ֪");
							}
							n[i].can_borrow+=1;
						}
						i+=1;
					}
					fclose(fp);
					j=i;
					fp=fopen("ͼ����Ϣ���ݿ�.txt","w");
					if(fp==NULL){printf("���ݿ�򿪴�������...\n");exit(0);}
					i=0;
					while(j!=0)
					{
						fprintf(fp,"%s %s %s %s %s %s %d %d %s %s %s %lld\n",n[i].title,n[i].author,n[i].press,n[i].year,n[i].claim_number,n[i].unit_price,n[i].collection,n[i].can_borrow,n[i].student_name,n[i].sex,n[i].student_id,n[i].number);
						fflush(fp);
						i+=1;j-=1;
					}			
					fclose(fp);
					system("cls");
					printf("  \n �������ɹ���\n\n");
					printf(" -------------------------------------------------------\n");
					printf("    [1].��������  [2].����ѧ�����ܲ˵�  [0].�˳�ϵͳ    \n");
					printf(" -------------------------------------------------------\n");
					printf("��ѡ��");
					scanf("%d",&c);
					while(1)
					{
						switch(c)
							{
							case 1:goto A;break;
							case 2:return(back=1);
							case 0:
								{
									system("cls");
									printf(" ------------------------------------------------------------\n");
									printf("                   -=  ��лʹ�ã��ټ��� =-                   \n");
									printf(" ------------------------------------------------------------\n");
									exit(0);
								}
							}
					}
				}
			case 2:return(back=1);
			}
		}
	}
}

