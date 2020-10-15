/*
问题：
对于长度相同的2个字符串A和B，其距离定义为相应位置字符距离之和。
2个非空格字符的距离是它们的ASCII码之差的绝对值；
空格与空格的距离为0，空格与其他字符的距离为一个定值k。
在一般情况下，字符串A和B的长度不一定相同。
字符串A的扩展是在A中插入若干空格字符所产生的字符串。
在字符串A和B的所有长度相同的扩展中，有一对距离最短的扩展，该距离称为字符串A和B的扩展距离。
对于给定的字符串A和B，设计一个算法，计算其扩展距离。

测试数据：
输入：cmc      snmn        2       （分别表示字符串A、B和定值k）
输出：10

解答：
设字符串A和B的字串A[1...i]和B[1...j]的扩展距离是val(i, j)；
依题意，字符串A和B有三种可能的情况：
1）A串最后一个字符是空格，B串最后一个字符是字母，则val(i, j) = val(i-1, j) + k；
2）A串最后一个字符时字母，B串最后一个字符时空格，则val(i, j) = val(i, j-1) + k；
3）A串和B串最后一个字符均是字母，则val(i, j) = val(i-1, j-1) + dist(ai , bi)；
由上可知，val(i, j)具有最优子结构性质，且满足如下递推式：
val(i, j) = min{ val(i-1, j) + k，val(i, j) + k，val(i-1, j-1) + dist(ai , bi) }
（使用动态规划算法，自底向上的计算各个子问题并利用每次计算的结果，避免重复运算，从而降低算法复杂度。）
从动态规划递归式可知，算法的时间复杂度为O（mn），m和n分别是字符串A和B的长度。

 

#include <iostream>
#include <cmath>
using namespace std;

int val[300][300];

string str1;
string str2;
int k;


//返回字符a与b的ASCII码的差的绝对值
int dist(char a, char b)
{
	return abs(a - b);
}

int comp()
{
	int len1, len2;
	int tmp;
	val[0][0] = 0;
	len1 = str1.length();
	len2 = str2.length();

	for (int i = 0; i <= len1; i++)
	{
		for (int j = 0; j <= len2; j++)
		{
			if (i + j)//i和j至少一个大于0
			{
				val[i][j] = 100000;
				tmp = val[i - 1][j] + k;
				if (i && (tmp < val[i][j]))//i大于0
					val[i][j] = tmp;
				tmp = val[i][j - 1] + k;
				if (j && (tmp < val[i][j]))//j大于0
					val[i][j] = tmp;
				tmp = val[i - 1][j - 1] + dist(str1[i], str2[j]);
				if ((i * j) && (tmp < val[i][j])) //i和j至少有一个不为0
    				val[i][j] = tmp;
			}
		}
	}
	return val[len1][len2];
}

int main()
{
	cin >> str1 >> str2 >> k;
	str1 = " " + str1;
	str2 = " " + str2;
	cout << comp() << endl;
	system("pause");
	return 0;
}
*/