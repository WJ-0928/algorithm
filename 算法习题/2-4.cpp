﻿/*
问题描述：
给定一个自然数 n，由 n 开始可以依次产生半数集 set(n)中的数如下。

(1) n∈set(n)；

(2) 在 n 的左边加上一个自然数，但该自然数不能超过最近添加的数的一半；

(3) 按此规则进行处理，直到不能再添加自然数为止。
例如，set(6)={6,16,26,126,36,136}。半数集 set(6)中有 6 个元素。
注意半数集不是多重集。集合中已经有的元素不再添加到集合中。
´编程任务：
对于给定的自然数 n，编程计算半数集 set(n)中的元素个数。
´数据输入：
输入数据由文件名为 input.txt 的文本文件提供。
每个文件只有 1 行，给出整数 n。(0<n<201)
´结果输出:
程序运行结束时，将计算结果输出到文件 output.txt 中。输出文件只有 1 行，给出半
数集 set(n)中的元素个数。
输入文件示例 输出文件示例
input.txt output.txt
6 6

【题解】


之前那个问题不需要考虑重复。
这个问题需要剔除重复的部分。
什么时候会发生重复呢?
比如
n=26
n/2=13
则可以组成[13][26]
但是你会发现,当你i枚举到3的时候(还没有枚举到13)
下一层再枚举到1就会组成[1][3][26].
则这会和你枚举到13组成的[13][26]重复。
所以做法便很显然了。
在算这一层的答案的时候减掉f[i/10]就好(当i/10*2<=i%10的时候)



#include<iostream>
using namespace std;

const int N = 1e3;

long long a[N + 10];


long long f(int n)
{
	if (n == 1)
		return 1;
	if (a[n] > 0)
		return a[n];
	long long temp = 1;
	for (int i = 1; i <= n / 2; i++)
	{
		temp = temp + f(i);
		if (i > 10)
		{
			int x = i / 10, y = i % 10;
			if (2 * x <= y)
			{
				temp -= a[x];
			}
		}
	}
	a[n] = temp;
	return temp;
}
int main()
{
	int n;
	while (cin >> n)
	{
		cout << f(n) << endl;
	}
	return 0;
}
*/
