#include<stdio.h>
#include<fstream>
#include<iostream>
#include<conio.h>

#include<stdlib.h>
int main(){

	FILE *fin,*ftp;
char a[1000];
fin=fopen("res.txt","r");//����ԭ�ļ�123.txt

if(fin==NULL || ftp==NULL){
printf("Open the file failure...\n");
exit(0);
}
char id;
cout<<"������Ҫ���ҵ�·�ɱ�ţ�"<<endl;
cin>>id;

while(fgets(a,1000,fin))//��ԭ�ļ���ȡһ��
if(a[1]==id||a[6]==id)
{
cout<<a<<endl; 
}
fclose(fin);
cout<<"����������"<<endl;
getch(); 
system("pause");
return 0;
}  

