#include<stdio.h>
#include<fstream>
#include<iostream>
#include<stdlib.h>
#include <string>

#include<conio.h>
void  detail(){
	 printf("��ǰ��������ͼ�ĸ�·�ɶ�����ϵ��\n");
    string   s;  
    ifstream fin("db.txt");
while ( getline(fin,s) )
{    
cout <<s<< endl; 
}
  fin.close();  
}

 void menu(){
	int p; 
printf("������Ҫ�������ֲ�����\n");
printf("1.���ӱ�\n");
printf("2.ɾ����\n");
printf("3.���ӵ�\n");
printf("4.ɾ����\n"); 
printf("����1��4��ѡ��");
scanf("%d",&p);
    if(p<1||p>4)
	{printf("\n\n������Ų����ڲ˵�!");
	p=5;}
	switch(p)
	{
	 case 1:system("aline.exe main.txt db.txt");getch();system("pause");break;    
     case 2:system("bline.exe main.txt db.txt");getch();system("pause");break;   
     case 3:system("apot.exe main.txt db.txt");getch();system("pause");break;   
	 case 4:system("bpot.exe main.txt db.txt");getch();system("pause");break;
	 default:system("cls");break;
} 
 }
int main()
{
    string  a; 
	ifstream fin("main.txt");
	printf("��ǰ��������ͼ�Ķ������:");
	getline(fin,a);
	cout<<a<<endl;
	
	 string  b; 
	printf("��ǰ��������ͼ�ı߸�����");
    getline(fin,b);
    cout<<b<<endl;
    fin.close();
    //������������ 
detail();
menu(); 
	
}
