#include<stdio.h>
#include<fstream>
#include<iostream>
#include<stdlib.h>
#include <string>

#include<conio.h>
void  detail(){
	 printf("当前网络拓扑图的各路由顶点间关系：\n");
    string   s;  
    ifstream fin("db.txt");
while ( getline(fin,s) )
{    
cout <<s<< endl; 
}
  fin.close();  
}

 void menu(){
	int p; 
printf("请问您要进行哪种操作：\n");
printf("1.增加边\n");
printf("2.删除边\n");
printf("3.增加点\n");
printf("4.删除点\n"); 
printf("请在1到4中选择：");
scanf("%d",&p);
    if(p<1||p>4)
	{printf("\n\n输入序号不属于菜单!");
	p=5;}
	switch(p)
	{
	 case 1:system("aline.exe main.txt db.txt");getch();system("pause");break;    
     case 2:system("bline.exe main.txt db.txt");getch();system("pause");break;   
     case 3:system("apot.exe main.txt db.txt");getch();system("pause");break;   
	 case 4:system("bpot.exe main.txt db.txt");getch();system("pause");break;
	 default:system("cls");break;
} 
 }
int main()
{
    string  a; 
	ifstream fin("main.txt");
	printf("当前网络拓扑图的顶点个数:");
	getline(fin,a);
	cout<<a<<endl;
	
	 string  b; 
	printf("当前网络拓扑图的边个数：");
    getline(fin,b);
    cout<<b<<endl;
    fin.close();
    //—————— 
detail();
menu(); 
	
}
