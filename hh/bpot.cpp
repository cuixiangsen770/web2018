#include<stdio.h>
#include<fstream>
#include<iostream>
void h(int i){
	printf("ɾ��һ����\n"); 
	 ifstream in;
	in.open("main.txt");
	int a,b;
		in>>a>>b;
	cout<<"֮ǰ��������"<<a<<endl; 
    cout<<"֮ǰ������"<<b<<endl; 
    a=a-1;
    cout<<"ɾ��һ�������Ķ�����"<<a<<endl;
    cout<<"ɾ��һ�������ı���"<<i<<endl;
  in.close();
  ofstream out("main.txt");
  out<<a<<"\n"<<i;
  out.close();
}
int main(){

	FILE *fin,*ftp;
char a[1000];
fin=fopen("db.txt","r");//����ԭ�ļ�123.txt
ftp=fopen("tmp.txt","w");//д����ʱ�ļ�tmp.txt
if(fin==NULL || ftp==NULL){
printf("Open the file failure...\n");
exit(0);
}
char id;
cout<<"������Ҫɾ���ĵ�ı�ţ�"<<endl;
cin>>id;
int i=0;
while(fgets(a,1000,fin))//��ԭ�ļ���ȡһ��
if(a[0]!=id)//������Ҫɾ��������?
{
fputs(a,ftp);//��������һ��д����ʱ�ļ�tmp.txt
i++;
}
fclose(fin);
fclose(ftp);
remove("db.txt");//ɾ��ԭ�ļ�
rename("tmp.txt","db.txt");//����ʱ�ļ�����Ϊԭ�ļ���
cout<<"����������"<<endl;
	h(i); 
return 0;
}  

