/*
机器人Rob在一个有n*n 个方格的方形区域F 中收集样本。（i,j）方格中样本的价值为v(i,j)，如下图所示。
Rob 从方形收集样本问题区域F 的左上角A点出发，向下或向右Rob 从方形区域F 的左上角A点出发，向下或向右行走，
直到右下角的B 点，在走过的路上，收集方格中的样本。Rob 从A点到B 点共走2次，试找出Rob 的2条行走路径，
使其取得的样本总价值最大。给定方形区域F 中的样本分布，编程计算Rob 的2条行走路径，
使其取得的样本总价值最大。行走，直到右下角的B 点，在走过的路上，收集方格中的样本。
Rob 从A点到B 点共走2次，试找出Rob 的2条行走路径，使其取得的样本总价值最大。
给定方形区域F 中的样本分布，编程计算Rob 的2条行走路径，使其取得的样本总价值最大。

输入：
第1 行有1 个正整数n，表示方形区域F有n*n 个方格。接下来每行有3 个整数，前2 个表示方格位置，
第3个数为该位置样本价值。最后一行是3个0。

输出：
计算的样本总价值。

输入样例：
8
2 3 13
2 6 6
4 4 14
5 2 21
5 6 4
3 5 7
6 3 15
7 2 14
0 0 0

输出样例：
67

思路：设两次行走等长距离，到达（x1,y1）和（x2,y2）处取得的最大值为h[x1][y1][x2][y2]。

#include<iostream>
#include<cstring>
using namespace std;
int h[10][10][10][10];
int g[10][10];
int n;
int min(int a, int b)
{
    return a < b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
void updata(int x1, int y1, int x2, int y2, int v)
{
    if (x1 == x2 && y1 == y2)
        h[x1][y1][x2][y2] = max(h[x1][y1][x2][y2], v + g[x1][y1]);
    else
        h[x1][y1][x2][y2] = max(h[x1][y1][x2][y2], v + g[x1][y1] + g[x2][y2]);
}
void select()
{
    int x1, y1, x2, y2;
    int s, v;
    memset(h, 0, sizeof(h));
    h[1][1][1][1] = g[1][1];
    for (s = 2; s <= 2 * n - 1; s++)//所走步长
    {
        for (x1 = 1; x1 <= min(s - 1, n); x1++)
        {
            for (x2 = 1; x2 <= min(s - 1, n); x2++)
            {
                y1 = s + 1 - x1;
                y2 = s + 1 - x2;
                v = h[x1][y1][x2][y2];
                updata(x1 + 1, y1, x2 + 1, y2, v);
                updata(x1 + 1, y1, x2, y2 + 1, v);
                updata(x1, y1 + 1, x2 + 1, y2, v);
                updata(x1, y1 + 1, x2, y2 + 1, v);
            }
        }
    }
}
int main()
{
    int a, b, c;
    while (cin >> n)
    {
        memset(g, 0, sizeof(g));
        while (cin >> a >> b >> c)
        {
            if (a == 0 && b == 0 && c == 0)
                break;
            g[a][b] = c;
        }
        select();
        int ans = h[n][n][n][n];
        cout << ans << '\n';
    }
    return 0;
}
*/