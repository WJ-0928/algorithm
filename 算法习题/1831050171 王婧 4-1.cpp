//问题描述：
//假设要在足够多的会场里安排一批活动，并希望使用尽可能少的会场。设计一个有效的贪心算法进行安排（这个问题实际上是著名的图着色问题。若将每一个活动作为图的一个顶点，不相容活动间用边相连。使相邻顶点着有不同颜色的最小着色数，相应于要找的最小会场数）。
//算法设计
//对于K个待安排的活动，计算使用最少会场的时间表。
//输入输出
//input.txt
//5
//1 23
//12 28
//25 35
//27 80
//36 50
//output.txt
//3
//
//先简单描述我的思路，可能很多人刚开始和我的思路一样，最终代码很丑，不过还是简单叙述一下思路
//首先从第一个开始的活动出发，根据该活动的结束时间找到在这个时间之后的第一个活动的开始时间，
//然后从这个新活动出发再去寻找下一个第一个出现的相容的活动，依次类推，结束第一次遍历，
//可以找到一个会场的所有活动，这些活动标记一下，下次不再遍历。
//开启下次遍历，再找出一个新的会场的所有的活动，直到所有的活动找到会场为止。代码如下，只可以做参考（太丑）。
//具体的思路是：看一活动的开始时间是否大于某一会场的结束时间，如果是就加入该会场中，并更新该会场的结束时间，（如果有多个会场选择的话，就选最优的那一个，即结束时间最小的）
//，如果所有的会场都不满足，则再新增一个会场，把该活动的结束时间赋予这个新增的会场。
//算法的时间复杂度： 设有 n 个活动，使用了k（k <= n）个会场，则时间复杂度为 O（n（k + nlogn））
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//struct point
//{
//    int time;
//    bool flat;
//};
//bool tp(point x, point y)
//{
//    return x.time < y.time;
//}
//
//int greedy(vector<point> x)
//{
//    int max = 0, cur = 0, n = x.size();
//    sort(x.begin(), x.end(), tp);
//    for (int i = 0; i < n; i++)
//    {
//        if (x[i].flat)
//            cur++;
//        else
//            cur--;
//        if ((i == n - 1 || x[i].time < x[i + 1].time) && cur > max)
//            max = cur;
//    }
//    return max;
//}
//
//int main()
//{
//    vector<point> x;
//    int n, i;
//    point temp;
//    while (cin >> n, n)
//    {
//        for (i = 0; i < n; i++)
//        {
//            temp.flat = true;
//            cin >> temp.time;
//            x.push_back(temp);
//            temp.flat = false;
//            cin >> temp.time;
//            x.push_back(temp);
//        }
//        cout << greedy(x) << endl;
//        x.clear();
//    }
//    return 0;
//}