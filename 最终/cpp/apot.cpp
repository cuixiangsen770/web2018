#include<stdio.h>
#include<fstream>
#include<iostream>
void h(){
	printf("����һ����"); 
	ifstream in;
	in.open("main.txt");
	int a,b;
		in>>a>>b;
	cout<<"��ǰ��������"<<a<<endl; 
    cout<<"��ǰ������"<<b<<endl; 
    a=a+1;b=b+1;
    cout<<"����һ�������Ķ�����"<<a<<endl;
     cout<<"����һ�������ı���"<<b<<endl;
  in.close();
  ofstream out("main.txt");
  out<<a<<"\n"<<b;
  out.close();
}
//
int main(){
int m,n,w;
 cout<<"���������ӵ�ıߵĶ��� Ŀ��·�� Ȩ�أ�";

cin>>m>>n>>w;

ofstream fout("db.txt",ios::app);
fout<<m<<" "<<n<<" "<<w<<"\n";
   fout.close();
   cout<<"��ӳɹ�!"<<endl; 
   h();
}
