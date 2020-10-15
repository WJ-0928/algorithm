//#include<stdio.h>
//#include<iostream>
//using namespace std;
//int map[22][22];
//
//int ans = 200000000;
//
//int n;
//
//void dfs(int layer, int cost, int di) {
//	if (layer == n) {
//		if (ans > cost) ans = cost;
//		return;
//	}
//	if (ans <= cost) return;
//	for (int i = 0; i < n; i++) {
//		if (di >> i & 1) continue;
//		int nd = di | 1 << i;
//		int nc = cost + map[layer][i];
//		if (ans <= nc) continue;
//		dfs(layer + 1, nc, nd);
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cin>>map[i][j];
//	dfs(0, 0, 0);
//	printf("%d\n", ans);
//	return 0;
//}
