#include<stdio.h>
#include<fstream>
#include<iostream>
void h(){
	printf("增加一个点"); 
	ifstream in;
	in.open("main.txt");
	int a,b;
		in>>a>>b;
	cout<<"当前顶点数："<<a<<endl; 
    cout<<"当前边数："<<b<<endl; 
    a=a+1;b=b+1;
    cout<<"增加一个顶点后的顶点数"<<a<<endl;
     cout<<"增加一个顶点后的边数"<<b<<endl;
  in.close();
  ofstream out("main.txt");
  out<<a<<"\n"<<b;
  out.close();
}
//
int main(){
int m,n,w;
 cout<<"请输入增加点的边的顶点 目标路由 权重：";

cin>>m>>n>>w;

ofstream fout("db.txt",ios::app);
fout<<m<<" "<<n<<" "<<w<<"\n";
   fout.close();
   cout<<"添加成功!"<<endl; 
   h();
}
