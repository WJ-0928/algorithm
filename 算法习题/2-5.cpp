/*
´问题描述：
设 R={ n
r ,r , ,r 1 2  }是要进行排列的 n 个元素。其中元素 n
r ,r , ,r 1 2  可能相同。试设计
一个算法，列出 R 的所有不同排列。
´编程任务：
给定 n 以及待排列的 n 个元素。计算出这 n 个元素的所有不同排列。
´数据输入：
由文件 input.txt 提供输入数据。文件的第 1 行是元素个数 n，1£n£500。接下来的 1 行
是待排列的 n 个元素。
´结果输出:
程序运行结束时，将计算出的 n 个元素的所有不同排列输出到文件 output.txt 中。文件
最后 1 行中的数是排列总数。
输入文件示例 输出文件示例
input.txt output.txt
4
aacc
aacc
acac
acca
caac
caca
ccaa
6

【题解】

枚举当前位置要放的数字是什么然后和长度为len-1的排列接在一起成为长度为len的排列。
这种搜的方法的确更优秀点。 因为可以在搜的时候就把重复的数字直接排除掉。 
设当前要确定的位置是L. 然后枚举其要和后面某个位置交换。
假设是i. 则我们只要看看L..i-1这个区间里面的数字有没有和a[i]相同的就可以了。
如果有相同的。那么之前肯定已经考虑过了(因为i是顺序枚举的).则直接跳过就行。
以前我写的排列的方法要把所有的排列全都列出来。 
事实上那样 20 aaaa.aa(20个a) 这样的情况就不能很快解决了 而这样的枚举方法可秒出解

#include <cstdio>
#include<iostream>
#include <algorithm>
using namespace std;

int cnt;

template<class Type>
bool yes(Type a[], int l, int cur) {
    for (int i = l; i < cur; i++) 
    {
        if (a[cur] == a[i]) 
        {
            return false;
        }
    }
    return true;
}

template<class Type>
void pailie(Type a[], int l, int m) 
{
    if (l == m) 
    {
        printf("%d:", ++cnt);
        for (int i = 1; i <= m; i++) 
        {
            cout << a[i];
        }
        puts("");
        return;
    }
    for (int k = l; k <= m; k++) 
    {
        if (yes(a, l, k))
        {
            swap(a[l], a[k]);
            pailie(a, l + 1, m);
            swap(a[l], a[k]);
        }
    }
}

int main() {
    int n;
    char s[20];
    cin >> n;
    cin>>s + 1;
    pailie(s, 1, n);
    return 0;
}

*/