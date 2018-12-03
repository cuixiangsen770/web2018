#include<stdio.h>
#include<fstream>
#include<iostream>
#include<conio.h>

#include<stdlib.h>
int main(){

	FILE *fin,*ftp;
char a[1000];
fin=fopen("res.txt","r");//读打开原文件123.txt

if(fin==NULL || ftp==NULL){
printf("Open the file failure...\n");
exit(0);
}
char id;
cout<<"输入你要查找的路由编号："<<endl;
cin>>id;

while(fgets(a,1000,fin))//从原文件读取一行
if(a[1]==id||a[6]==id)
{
cout<<a<<endl; 
}
fclose(fin);
cout<<"操作结束！"<<endl;
getch(); 
system("pause");
return 0;
}  

