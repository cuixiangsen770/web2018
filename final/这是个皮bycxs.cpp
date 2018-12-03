#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
  void menu()
 {
 	int p;
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("夏星明"); 
   printf("\t\t\t ———————————————————————————\n");
   printf("\t\t\t|                                                      |\n");
   printf("\t\t\t|                    网络拓扑&路由表系统               |\n");
   printf("\t\t\t|                    请选择相应实现功能                |\n");
   printf("\t\t\t|                    1.生成当前网络路由表              |\n");
   printf("\t\t\t|                    2.修改当前网络拓扑图              |\n");
   printf("\t\t\t|                    3.重置网络拓扑图                  |\n");
   printf("\t\t\t|                    4.代码说明                        |\n");
   printf("\t\t\t|                    5.退出系统                        |\n");
   printf("\t\t\t|                    6.查看特定网络路由的路由表        |\n");   
   printf("\t\t\t——————————  请输入你的选择：");
   scanf("%d",&p);
   
    if(p<1||p>6)
	{printf("\n\n输入序号不属于菜单，请重新输入\n\n");
	p=7;}
	switch(p)
	{
	 case 1:system("main.exe main.txt db.txt");getch();system("cls");menu();    
     case 2:system("txt.exe main.txt db.txt");getch();system("cls");menu();  
     case 3:system("retxt.exe main.txt db.txt");;getch();system("cls");menu();  
	 case 4:system("webweb.exe");getch();system("cls");menu();
	 case 5:exit(0);break;      //退出
	 case 6:system("rremain.exe  res.txt");getch();system("cls");menu();
     case 7:;getch();system("cls");menu();
	}
}

int main(){ 
menu();
}
