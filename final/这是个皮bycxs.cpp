#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
  void menu()
 {
 	int p;
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("������"); 
   printf("\t\t\t ������������������������������������������������������\n");
   printf("\t\t\t|                                                      |\n");
   printf("\t\t\t|                    ��������&·�ɱ�ϵͳ               |\n");
   printf("\t\t\t|                    ��ѡ����Ӧʵ�ֹ���                |\n");
   printf("\t\t\t|                    1.���ɵ�ǰ����·�ɱ�              |\n");
   printf("\t\t\t|                    2.�޸ĵ�ǰ��������ͼ              |\n");
   printf("\t\t\t|                    3.������������ͼ                  |\n");
   printf("\t\t\t|                    4.����˵��                        |\n");
   printf("\t\t\t|                    5.�˳�ϵͳ                        |\n");
   printf("\t\t\t|                    6.�鿴�ض�����·�ɵ�·�ɱ�        |\n");   
   printf("\t\t\t��������������������  ���������ѡ��");
   scanf("%d",&p);
   
    if(p<1||p>6)
	{printf("\n\n������Ų����ڲ˵�������������\n\n");
	p=7;}
	switch(p)
	{
	 case 1:system("main.exe main.txt db.txt");getch();system("cls");menu();    
     case 2:system("txt.exe main.txt db.txt");getch();system("cls");menu();  
     case 3:system("retxt.exe main.txt db.txt");;getch();system("cls");menu();  
	 case 4:system("webweb.exe");getch();system("cls");menu();
	 case 5:exit(0);break;      //�˳�
	 case 6:system("rremain.exe  res.txt");getch();system("cls");menu();
     case 7:;getch();system("cls");menu();
	}
}

int main(){ 
menu();
}
