#include<stdio.h>
#include<fstream>
#include<iostream>
void h(int i){
	printf("删除一个点\n"); 
	 ifstream in;
	in.open("main.txt");
	int a,b;
		in>>a>>b;
	cout<<"之前顶点数："<<a<<endl; 
    cout<<"之前边数："<<b<<endl; 
    a=a-1;
    cout<<"删除一个顶点后的顶点数"<<a<<endl;
    cout<<"删除一个顶点后的边数"<<i<<endl;
  in.close();
  ofstream out("main.txt");
  out<<a<<"\n"<<i;
  out.close();
}
int main(){

	FILE *fin,*ftp;
char a[1000];
fin=fopen("db.txt","r");//读打开原文件123.txt
ftp=fopen("tmp.txt","w");//写打开临时文件tmp.txt
if(fin==NULL || ftp==NULL){
printf("Open the file failure...\n");
exit(0);
}
char id;
cout<<"输入你要删除的点的编号："<<endl;
cin>>id;
int i=0;
while(fgets(a,1000,fin))//从原文件读取一行
if(a[0]!=id)//检验是要删除的行吗?
{
fputs(a,ftp);//不是则将这一行写入临时文件tmp.txt
i++;
}
fclose(fin);
fclose(ftp);
remove("db.txt");//删除原文件
rename("tmp.txt","db.txt");//将临时文件名改为原文件名
cout<<"操作结束！"<<endl;
	h(i); 
return 0;
}  

