#include <iostream>
using namespace std;

const int INF = 100000;
const int MAX = 50;
int p[MAX][MAX];
int bestx[MAX];
int x[MAX];
int minLen = INF;
int n, m; 

int low[MAX];
int heigh[MAX];
int len(int n)
{
    int i;
    for (i = 1; i <= m; i++)
    {
        low[i] = INF;
        heigh[i] = 0;
    }

    for (i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (p[x[i]][j] > 0)
            {
                if (i < low[j])
                    low[j] = i;
                if (i > heigh[j])
                    heigh[j] = i;
            }

    int max = 0;
    for (i = 1; i <= m; i++)
        if (heigh[i] > 0 && low[i]<INF && heigh[i] - low[i]>max)
            max = heigh[i] - low[i];

    return max;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void backtrack(int i)
{
    if (i == n)
    {
        int ld = len(i);
        if (ld < minLen)
        {
            minLen = ld;
            for (int j = 1; j <= n; j++)
                bestx[j] = x[j];
        }
    }
    else
        for (int r = i; r <= n; r++)
        {
            swap(x[i], x[r]);
            if (len(i) < minLen)
                backtrack(i + 1);
            swap(x[i], x[r]);
        }
}

int main()
{
    cout << n;
    cout << m;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 1; i <= n; i++)
        x[i] = i;
    backtrack(1);
    cout << minLen;
    for (i = 1; i <= n; i++)
        cout << bestx[i] << " ";

    cout << endl;
    cout << endl;
    return 0;
}