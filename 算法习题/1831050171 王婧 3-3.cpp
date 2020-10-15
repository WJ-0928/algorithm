/*
´问题描述：
在一个圆形操场的四周摆放着 n 堆石子。现要将石子有次序地合并成一堆。规定每次只
能选相邻的 2 堆石子合并成新的一堆，并将新的一堆石子数记为该次合并的得分。试设计一
个算法，计算出将 n 堆石子合并成一堆的最小得分和最大得分。
´编程任务：
对于给定 n 堆石子,编程计算合并成一堆的最小得分和最大得分。
´数据输入：
由文件 input.txt 提供输入数据。文件的第 1 行是正整数 n，1£n£100，表示有 n 堆石子。
第二行有 n 个数，分别表示每堆石子的个数。
´结果输出:
程序运行结束时，将计算结果输出到文件 output.txt 中。文件的第 1 行中的数是最小得
分；第 2 行中的数是最大得分；。
输入文件示例 输出文件示例
input.txt output.txt
4
4 4 5 9
43
54

【题解】

f1[i][j]表示从i开始长度为j的最佳合并方案得分 
f2[i][j]表示从i开始长度为j的最差合并方案得分 
因为是个环所以把石头的范围扩展一下,扩展到n+1..2*n 枚举长度,枚举起点,枚举中断点。 然后做DP就是了


#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int M = 1e4;
int main() {
	int n, s;
	int f1[210][110], f2[210][110];
	int a[210];
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) a[i + n] = a[i];
	for (int i = 1; i <= 2 * n; i++) a[i] = a[i] + a[i - 1];
	for (int i = 1; i <= 2 * n; i++) {
		f1[i][1] = f2[i][1] = 0;
	}
	for (int l = 2; l <= n; l++) {
		for (int i = 1; i <= 2 * n; i++) {
			int j = i + l - 1;
			if (j > 2 * n) break;
			f1[i][l] = f1[i][1] + f1[i + 1][l - 1] + a[j] - a[i - 1];
			f2[i][l] = f2[i][1] + f2[i + 1][l - 1] + a[j] - a[i - 1];
			for (int k = 2; k <= l - 1; k++) {
				f1[i][l] = max(f1[i][l], f1[i][k] + f1[i + k][l - k] + a[j] - a[i - 1]);
				f2[i][l] = min(f2[i][l], f2[i][k] + f2[i + k][l - k] + a[j] - a[i - 1]);
			}
		}
	}
	int ma = f1[1][n], mi = f2[1][n];
	for (int i = 2; i <= n; i++)
	{
		ma = max(ma, f1[i][n]);
		mi = min(mi, f2[i][n]);
	}
	cout << mi << endl;
	cout << ma << endl;
	return 0;
}

*/