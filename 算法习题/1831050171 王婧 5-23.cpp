//#include<iostream>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//
//const int N = 4;
//double ml = 10000, x[N], r[N];
//double bestr[N];
//
//double ct(int t)
//{
//	double temp = 0;
//	for (int j = 1; j < t; ++j)
//	{
//		double xv = x[j] + 2.0 * sqrt(r[t] * r[j]);
//		if (xv > temp)
//			temp = xv;
//	}
//	return temp;
//}
//void cp()
//{
//	double low = 0, high = 0;
//	for (int i = 1; i < N; ++i)
//	{
//		if (x[i] - r[i] < low)
//			low = x[i] - r[i];
//		if (x[i] + r[i] > high)
//			high = x[i] + r[i];
//	}
//	if (high - low < ml)
//	{
//		ml = high - low;
//		for (int i = 1; i < N; ++i)
//			bestr[i] = r[i];
//	}
//}
//void bt(int t)
//{
//	if (t == N)
//	{
//		cp();
//	}
//	else
//	{
//		for (int j = t; j < N; ++j)
//		{
//			swap(r[t], r[j]);
//			double centerx = ct(t);
//			if (centerx + r[t] + r[1] < ml)
//			{
//				x[t] = centerx;
//				bt(t + 1);
//			}
//			swap(r[t], r[j]);
//		}
//	}
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	for (int i = 1; i < a + 1; i++)
//	{
//		cin >> r[i];
//	}
//	bt(1);
//	cout << ml << endl;
//	return 0;
//}
