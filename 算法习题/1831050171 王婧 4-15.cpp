//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int sum = 0;
//    int i, d;
//    for (i = 2;; ++i)
//    {
//        sum += i;
//        d = sum - n;
//        if (d >= 0) break;
//    }
//    unsigned int result = 1; //如果n太大，可能无法储存结果
//    if (d == 1)
//    {
//        for (int j = 3; j < i; ++j)
//            result *= j;
//        ++i;
//       result *= i;
//    }
//    else
//    {
//        for (int j = 2; j <= i; ++j)
//        {
//           if (j == d) continue;
//            result *= j;
//        }
//    }
//    cout <<  result << endl;
//    return 0;
//}
//
