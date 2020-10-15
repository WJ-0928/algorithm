//#include<iostream>
//#include<algorithm>
//using namespace std;
//int x[100], bestx[100], m[100][100];
//int f1 = 0, f2 = 0, cf = 0, bestf = 10000, n;
//void Backtrack(int t)
//{
//    int tempf, j;
//    if (t > n)
//    {
//        if (cf < bestf)
//        {
//            for (int i = 1; i <= n; i++)
//                bestx[i] = x[i];
//            bestf = cf;
//        }
//    }
//    else
//    {
//        for (j = t; j <= n; j++)
//        {
//            f1 += m[x[j]][1];
//            tempf = f2;
//            f2 = (f1 > f2 ? f1 : f2) + m[x[j]][2];
//            cf += f2;
//            if (cf < bestf)
//            {
//                swap(x[t], x[j]);
//                Backtrack(t + 1);
//                swap(x[t], x[j]);
//            }
//            f1 -= m[x[j]][1];
//            cf -= f2;
//            f2 = tempf;
//        }
//    }
//}
//int main()
//{
//    int i, j;
//
//    cin >> n;
//    for (i = 1; i <= 2; i++)
//        for (j = 1; j <= n; j++)
//            cin >> m[j][i];
//    for (i = 1; i <= n; i++)
//        x[i] = i;
//    Backtrack(1);
//    cout << bestf;
//    for (i = 1; i <= n; i++)
//        cout << bestx[i] << ' ';
//    cout << endl;
//    
//    return 0;
//}
