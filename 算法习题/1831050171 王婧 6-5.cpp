//羽毛球队有男女运动员各n 人。给定2 个n×n 矩阵P 和Q。P[i][j]是男运动员i 和女运动员j配对组成混合双打的男运动员竞赛优势；Q[i][j]是女运动员i和男运动员j配合的女运动员竞赛优势。由于技术配合和心理状态等各种因素影响，P[i][j]不一定等于Q[j][i]。男运动员i和女运动员j配对组成混合双打的男女双方竞赛优势为P[i][j] * Q[j][i]。
//设计一个算法，计算男女运动员最佳配对法，使各组男女双方竞赛优势的总和达到最大。
//设计一个算法，对于给定的男女运动员竞赛优势，计算男女运动员最佳配对法，使各组男女双方竞赛优势的总和达到最大。
//Input
//输入数据的第一行有1 个正整数n(1≤n≤20)。接下来的2n 行，每行n个数。前n行是p，后n行是q。
//Output
//将计算出的男女双方竞赛优势的总和的最大值输出。
//Sample Input
//
//3
//10 2 3
//2 3 4
//3 4 5
//2 2 2
//3 5 3
//4 5 1
//1
//2
//3
//4
//5
//6
//7
//Sample Output
//52
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n, ans;
//int a[22][22], b[22][22];
//int vis[22], per[22];
//
//void FS(int x, int s)
//{
//    if (x > n)
//    {
//        ans = max(ans, s);
//        return;
//    }
//    if (s + per[n] - per[x - 1] < ans)
//        return;
//    for (int i = 1; i <= n; i++)
//    {
//        if (!vis[i])
//        {
//            vis[i] = 1;
//            FS(x + 1, s + a[x][i] * b[i][x]);
//            vis[i] = 0;
//        }
//    }
//}
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//            cin >> a[i][j];
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//            cin >> b[i][j];
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//            per[i] = max(per[i], a[i][j] * b[j][i]);
//        per[i] += per[i - 1];
//    }
//    FS(1, 0);
//    cout << ans << endl;
//    return 0;
//}
