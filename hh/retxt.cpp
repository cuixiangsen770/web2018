#include<stdio.h>
#include"stdlib.h"
#include"string.h" 
#include<fstream>

#include<iostream>


int main()

{
ofstream fout("main.txt");
cout<<"�����붥������"<<endl;
int a;
cin>>a;
fout<<a;
fout<<"\n";
cout<<"�����������"<<endl;
int b;
cin>>b;
fout<<b;
fout.close(); 
ofstream foutt("db.txt");
for (int i = 0; i <b; ++i) {
cout<<"�����붥�� Ȩ�� Ŀ��·�ɣ�";
int m,n,w;
cin>>m>>n>>w;
foutt<<m<<" "<<n<<" "<<w;
foutt<<"\n";
}


return 0;//�������

}
