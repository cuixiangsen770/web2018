#include<stdio.h>
#include"stdlib.h"
#include"string.h" 
#include<fstream>

#include<iostream>


int main()

{
ofstream fout("main.txt");
cout<<"请输入顶点数："<<endl;
int a;
cin>>a;
fout<<a;
fout<<"\n";
cout<<"请输入边数："<<endl;
int b;
cin>>b;
fout<<b;
fout.close(); 
ofstream foutt("db.txt");
for (int i = 0; i <b; ++i) {
cout<<"请输入顶点 权重 目标路由：";
int m,n,w;
cin>>m>>n>>w;
foutt<<m<<" "<<n<<" "<<w;
foutt<<"\n";
}


return 0;//程序结束

}
