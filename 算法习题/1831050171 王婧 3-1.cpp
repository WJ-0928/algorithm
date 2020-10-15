/*
问题描述：
用2台处理机A和B处理n个作业。设第i个作业交给机器A处理时需要时间ai，若由机器B来处理，则需要时间bi。
由于各作业的特点和机器的性能关系，很可能对于某些i，有ai>bi，而对于某些j,j≠i，有aj>bj。
既不能将一个作业分开由2台机器处理，也没有一台机器能同时处理2个作业。
设计一个动态规划算法，使得这2台机器处理完这n个作业的时间最短(从任何一台机器开工到最后一台机器停工的总时间)。
研究一个实例：
(a1,a2,a3,a4,a5,a6)＝(2,5,7,10,5,2)；(b1,b2,b3,b4,b5,b6)＝(3,8,4,11,3,4)。
对于给定的2台处理机A和B处理n个作业，找出一个最优调度方案，使2台机器处理完这n个作业的时间最短。
思路：
首先要注意每个作业仅需要处理一次就行，不需要被机器A和B各处理一遍
采用动态规划;
定义F[i][j]为：表示完成i个作业且机器A花费j时间的条件下机器B所花费时间的最小值，
那么F[i][j] = min{F[i - 1][j] + b[i], F[i - 1][j - a[i]]}。解释一下：
假设前i - 1件已经被处理了，那么第 i 件作业由谁来处理呢？
可以分两种情况：
1：由机器A处理i，则机器B的时间为 F[i - 1][j - a[i]];
2：由机器B处理i，则机器B的时间为 F[i - 1][j] + b[i];
特殊情况：如果j < a[i],则不可能由机器A来完成，此时F[i][j] = F[i - 1][j] + b[i]；
最终F[i][j] 选择 1 和 2 中较小的一个，即F[i][j] = min{F[i - 1][j] + b[i], F[i - 1][j - a[i]]}。

#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int time_a = 0; 

int a[1024], b[1024];
void inPut()
{
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cin>>a[i];
        time_a += a[i];
    }
    for (int i = 1; i <= n; ++i)
        cin>>b[i];

}
int min_t = 0x3f3f3f;
int F[1024][1024];
void solve()
{
    memset(F, 0, sizeof(F));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= time_a; ++j)
        {
            if (j > a[i])
            {
                F[i][j] = min(F[i - 1][j - a[i]], F[i - 1][j] + b[i]);
            }
            else
            {
                F[i][j] = F[i - 1][j] + b[i];
            }
        }
    }
    int temp;
    for (int i = 0; i <= time_a; ++i)
    {
        temp = max(F[n][i], i);
        if (min_t > temp)
            min_t = temp;
    }
}
int main()
{
    inPut();
    solve();
    printf("%d\n", min_t);
}
*/
