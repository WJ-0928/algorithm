//羽毛球队有男女运动员各n人。给定2个n×n 矩阵P和Q。P[i][j]是男运动员i和女运动员 j配对组成混合双打的男运动员竞赛优势；Q[i][j]是女运动员i和男运动员j配合的女运动员竞赛优势；由于技术配合和心理状态等各种因素影响, P[i][j]不一定等于Q[j][i]。男运动员i和女运动员j配对组成混合双打的男女双方竞赛优势为P[i][j] * Q[j][i]。设计一个算法，计算男女运动员最佳配对法, 使各组男女双方竞赛优势的总和达到最大。   算法设计:设计一个算法，计算男女运动员最佳配对法, 使各组男女双方竞赛优势的总和达到最大。                                                                        
//
//数据输入 : 第一行有1个正整数n(1≦n≦20〉。接下来的2n行, 每行n个数。前n行是p，后n行是q。                                                                结果输出 : 将计算的男女双方竞赛优势的总和的最大值输出到文件output.txt。
//
//	输入文件示例                              输出文件示例
//
//	input.txt                                        output.txt
//
//	3                                                  52
//
//	10 2 3
//
//	2 3 4
//
//	3 4 5
//
//	2 2 2
//
//	3 5 3
//
//	4 5 1
//
//	算法思想：排列树问题，重新开辟一个数组记录女运动员或者男运动员，对其进行全排列，到回溯到最后一行时将得到的值与之前已得到的最大值进行比较，如果大于之前的最大值，则进行更新


//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//
//#define N 100
//int n;
//int P[N][N], Q[N][N];
//int x[N];
//int opt[N];
//int tV = 0, mV = 0;
//
//void cp() {
//	tV = 0;
//	for (int i = 1; i <= n; i++) {
//		tV += P[i][x[i]] * Q[x[i]][i];
//	}
//	if (tV > mV) {
//		mV = tV;
//		for (int i = 1; i <= n; i++) {
//			opt[i] = x[i];
//		}
//	}
//}
//
//void tb(int t) {
//	int i, j, temp;
//	if (t > n) {
//		cp();
//	}
//	for (i = t; i <= n; i++) {
//		temp = x[i];
//		x[i] = x[t];
//		x[t] = temp;
//		tb(t + 1);
//		temp = x[i];
//		x[i] = x[t];
//		x[t] = temp;
//	}
//}
//int main() {
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		x[i] = i;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin>>P[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin>>Q[i][j];
//		}
//	}
//	tb(1);
//	cout<<mV;
//	return 0;
//}