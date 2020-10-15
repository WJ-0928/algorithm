//试设计一个用回溯法搜索子集空间树的函数。该函数的参数包括结点可行性判定函数和上界函数等必要的函数，并将此函数用于解装载问题。
//装载问题描述如下：有一批共n(n≤≡10)个集装箱要装上艘载重量为c的轮船，其中集装箱i的重量为wi。找出一种最优装载方案，将轮船尽可能装满，即在装载体积不受限制的情况下，将尽可能重的集装箱装上轮船。
//
//Input
//
//输入由多组测试数据组成。
//每组测试数据输入的第一行有2个正整数n和c，n是集装箱数，c是轮船的载重量。接下来的1行中有n个正整数，表示集装箱的重量。
//
//Output
//
//对应每组输入，输出的每行是将计算出的最大装载重量。
//
//Sample Input
//
//5 10
//7 2 6 5 4
//
//Sample Output
//
//10
//#include <iostream>
//#include <string>
//using namespace std;
//void main() {
//	int i, j, n, c, temp, L[100], S[100], p, sum, Get, max;
//	cin >> n >> c;
//	for (i = 0; i < n; i++) {
//		cin >> L[i];
//	}
//	max = 0;
//	sum = 0;
//	p=-1;
//	for (i = 0; i < n; i++) {
//		if (sum + L[i] <= c) {
//			sum = sum + L[i];
//			p++;
//			S[p] = i;
//			break;
//		}
//	}
//	while ((p != -1) || (i <= n - 1)) {
//		if (i <= n - 1) {
//			Get = S[p];
//			for (i = Get + 1; i < n; i++) {
//				if (sum + L[i] <= c) {
//					sum = sum + L[i];
//					p++;
//					S[p] = i;
//				}
//			}
//		}
//		if (i == n) {
//			if (sum > max) max = sum;
//			Get = S[p];
//			p--;
//			sum = sum - L[Get];
//			for (i = Get + 1; i < n; i++) {
//				if (sum + L[i] <= c) {
//					sum = sum + L[i];
//					p++;
//					S[p] = i;
//					break;
//				}
//			}
//		}
//	}
//	cout << max << endl;
//}