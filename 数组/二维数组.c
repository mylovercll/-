#include<stdio.h>
#define rows 4
#define cols 3 
int add(int (*)[3]);
int adda(int(*)[3], int );//函数原型int add(int (*)[3])对应函数定义int add(int  (*a)[3] )
int main()                  //函数原型int add(int [][3])对应函数定义int add(int  a[][3] )
{                           //省略函数名就是这个意思！！
	
	int w[3][3],a[rows][cols],d,f;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%d", &w[i][j]);
		}
		

	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			scanf_s("%d", &a[i][j]);
		}


	}
	d=add(w);
	f = adda(a, rows);
	printf("%d%d", d,f);
	return 0;
	
}
int add(int  (*a)[3])
{
	int total=0;
	for (int n=0;n<3 ; n++)
	{
		for (int i = 0; i < 3; i++)
		{
			total = a[n][i] + total;
		}
	}
	return total;
}
int adda(int(*a)[3], int j)
{
	int total = 0;
	for (int n = 0; n < j; n++)
	{
		for (int i = 0; i < 4; i++)
		{
			total = a[n][i] + total;
		}
	}
	return total;
}


