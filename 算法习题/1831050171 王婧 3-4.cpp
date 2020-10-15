/*
´问题描述：
给定一个由 n 行数字组成的数字三角形如下图所示。试设计一个算法，计算出从三角形
的顶至底的一条路径，使该路径经过的数字总和最大。
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
´编程任务：
对于给定的由 n 行数字组成的数字三角形，编程计算从三角形的顶至底的路径经过的数
字和的最大值。
´数据输入：
由文件 input.txt 提供输入数据。文件的第 1 行是数字三角形的行数 n，1£n£100。接下
来 n 行是数字三角形各行中的数字。所有数字在 0..99 之间。
´结果输出:
程序运行结束时，将计算结果输出到文件 output.txt 中。文件的第 1 行中的数是计算
出的最大值。
输入文件示例 输出文件示例
input.txt output.txt
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
30

【题解】
 设f[i][j]表示从(1,1)走到(i,j)的最大值 f[i][j] = max(f[i-1][j],f[i-1][j-1])+a[i][j]; 


#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
int n;
int a[101][101],m[101][101];


int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> a[i][j];
			m[i][j] = a[i][j];//初始化m[i][j]为a[i][j]
		}
	}
	for (int row = n - 1; row >= 1; row--)
	{
		for (int col = 1; col <= row; col++)
		{
			if (m[row + 1][col] > m[row + 1][col + 1])
				m[row][col] += m[row + 1][col];
			else
				m[row][col] += m[row + 1][col + 1];
		}
	}
	cout << m[1][1] << endl;
	return 0;
}
*/