#include<stdio.h>
#include<fstream>
#include<iostream>
#include "stdlib.h"
void h(){
	printf("ɾ��һ����\n");
	ifstream in;
	in.open("main.txt");
	int a,b;
		in>>a>>b;
	cout<<"��ǰ��������"<<a<<endl; 
    cout<<"��ǰ������"<<b<<endl; 
    b=b-1;
    cout<<"ɾ��һ���ߺ�ı���"<<b<<endl;
  in.close();

  ofstream out("main.txt");
  out<<a<<"\n"<<b;
  out.close(); 
}
//
int main(void){

FILE *fin,*ftp;
char a[1000];
fin=fopen("db.txt","r");//����ԭ�ļ�123.txt
ftp=fopen("tmp.txt","w");//д����ʱ�ļ�tmp.txt
if(fin==NULL || ftp==NULL){
printf("Open the file failure...\n");
exit(0);
}
char id;
cout<<"������Ҫɾ���ıߵ�ԭ��·�ɵı�ţ�"<<endl;
cin>>id;
char idd;
cout<<"������Ҫɾ���ıߵ�Ŀ��·�ɵı�ţ�"<<endl;
cin>>idd;
while(fgets(a,1000,fin))//��ԭ�ļ���ȡһ��
if(a[0]!=id &&a[2]!=idd )//������Ҫɾ��������?
{ 
//cout<<a[6]<<endl; 
fputs(a,ftp);//��������һ��д����ʱ�ļ�tmp.txt
} 
fclose(fin);
fclose(ftp);
remove("db.txt");//ɾ��ԭ�ļ�
rename("tmp.txt","db.txt");//����ʱ�ļ�����Ϊԭ�ļ���
	h();
return 0;
}  

