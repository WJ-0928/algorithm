//试设计一个用回溯法搜索子集空间树的函数。该函数的参数包括结点可行性判定函数和上界函数等必要的函数，并将此函数用于解0 - 1背包问题。 0 - 1 背包问题描述如下：给定n 种物品和一个背包。物品i 的重量是wi ，其价值为vi ，背包的容量为C。应如何选择装入背包的物品，使得装入背包中物品的总价值最大 ? 在选择装入背包的物品时，对每种物品i只有2 种选择，即装入背包或不装入背包。不能将物品i 装入背包多次，也不能只装入部分的物品i。
//
//输入
//第一行有2个正整数n和c。n是物品数，c是背包的容量。接下来的1 行中有n个正整数，表示物品的价值。第3 行中有n个正整数，表示物品的重量。 
//
//
//输出
//将计算出的装入背包物品的最大价值和最优装入方案输出。第一行输出为：Optimal value is
//
//
//样例输入
//5 10
//6 3 5 4 6
//2 2 6 5 4
//
//样例输出
//Optimal value is
//15
//1 1 0 0 1


//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//struct bag
//{
//    int w;
//    int h;
//} b[200];
//
//int ab, c, n, ji[200], h[200];
//void xunhuan(int d, int s, int sc)
//{
//    if (sc > c)return;
//    if (d == n)
//    {
//        if (ab < s)
//        {
//            ab = s;
//            for (int i = 0; i < d; i++)
//                h[i] = ji[i];
//        }
//    }
//    else for (int i = 0; i < 2; i++)
//    {
//        if (i == 0)ji[d] = 0, xunhuan(d + 1, s, sc);
//        else ji[d] = 1, xunhuan(d + 1, s + b[d].w, sc + b[d].h);
//    }
//}
//int main()
//{
//    cin >> n >> c;
//    for (int i = 0; i < n; i++)
//        cin >> b[i].w;
//    for (int i = 0; i < n; i++)
//        cin >> b[i].h;
//    xunhuan(0, 0, 0);
//    printf("%d\n", ab);
//    for (int i = 0; i < n; i++)
//        printf(i != n - 1 ? "%d " : "%d\n", h[i]);
//    return 0;
//}