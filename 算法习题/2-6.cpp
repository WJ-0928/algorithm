
/*
#include <cstdio>
#include<iostream>
#include <cstring>
using namespace std;

int n;
int a[25], b[25];
long long f[25];

long long zhankai(int a[25]) {
    long long s = 0;
    for (int i = 1; i <= n; i++) {
        int v = 0;
        for (int j = i + 1; j <= n; j++) {
            if (a[j] < a[i]) {
                v++;
            }
        }
        s += 1LL * v * f[n - i];
    }
    return s;
}

int main() {
    f[0] = 1;
    for (int i = 1; i <= 15; i++)
    {
        f[i] = f[i - 1] * i;
    }
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    long long m = 0;
    m = zhankai(a);
    cout << m << endl;
   
    int cur[25];
    memset(cur, 0, sizeof(cur));
    for (int i = 1; i <= n; i++) {
        b[i] = m / f[n - i];
        for (int j = 1; j <= n; j++) {
            if (cur[j] == 0) {
                b[i]--;
                if (b[i] < 0) {
                    b[i] = j;
                    cur[j] = 1;
                    break;
                }
            }
        }
        m = m % f[n - i];
    }

    for (int i = 1; i <= n; i++) {
        cout<<b[i]<<" ";
    }
    return 0;
}

*/

