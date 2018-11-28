#include<stdio.h>
#include<fstream>
#include<iostream>
#include "stdlib.h"
void h(){
	printf("删除一条边\n");
	ifstream in;
	in.open("main.txt");
	int a,b;
		in>>a>>b;
	cout<<"当前顶点数："<<a<<endl; 
    cout<<"当前边数："<<b<<endl; 
    b=b-1;
    cout<<"删除一条边后的边数"<<b<<endl;
  in.close();

  ofstream out("main.txt");
  out<<a<<"\n"<<b;
  out.close(); 
}
//
int main(void){

FILE *fin,*ftp;
char a[1000];
fin=fopen("db.txt","r");//读打开原文件123.txt
ftp=fopen("tmp.txt","w");//写打开临时文件tmp.txt
if(fin==NULL || ftp==NULL){
printf("Open the file failure...\n");
exit(0);
}
char id;
cout<<"输入你要删除的边的原点路由的编号："<<endl;
cin>>id;
char idd;
cout<<"输入你要删除的边的目的路由的编号："<<endl;
cin>>idd;
while(fgets(a,1000,fin))//从原文件读取一行
if(a[0]!=id &&a[2]!=idd )//检验是要删除的行吗?
{ 
//cout<<a[6]<<endl; 
fputs(a,ftp);//不是则将这一行写入临时文件tmp.txt
} 
fclose(fin);
fclose(ftp);
remove("db.txt");//删除原文件
rename("tmp.txt","db.txt");//将临时文件名改为原文件名
	h();
return 0;
}  

