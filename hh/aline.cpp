#include<stdio.h>
#include<fstream>
#include<iostream>
#include<stdlib.h>
#include <string>
#include<conio.h>
void h(){
	printf("����һ����\n"); 
	ifstream in;
	in.open("main.txt");
	int a,b;
		in>>a>>b;
	cout<<"��ǰ��������"<<a<<endl; 
    cout<<"��ǰ������"<<b<<endl; 
    b=b+1;
    cout<<"����һ���ߺ�ı���"<<b<<endl;
  in.close();
  
  ofstream out("main.txt");
  out<<a<<"\n"<<b;
  out.close();
}
//  
int main(){
int m,n,w;
 cout<<"���������ӵıߵĶ��� Ŀ��·�� Ȩ�أ�";

cin>>m>>n>>w;

ofstream fout("db.txt",ios::app);
fout<<m<<" "<<n<<" "<<w<<"\n";
   fout.close();
   cout<<"��ӳɹ�!"<<endl; 
   h();
}

