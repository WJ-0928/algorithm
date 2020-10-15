
//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp1(const void* a, const void* b) {
//    return *(int*)a - *(int*)b; 
//}
//int cmp2(const void* a, const void* b) {
//    return *(int*)b - *(int*)a; 
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    int p[n], p1[n];
//    int times = 0;
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &p[i]);
//        p1[i] = p[i];
//    }
//    
//    for (int i = 0; i < n - 1; i++) {
//        qsort(p1, n, sizeof(int), cmp2);
//        p1[0] = p1[0] + p1[1];
//        times += p1[0] - 1;
//        p1[1] = 0;
//    }
//    printf("%d\n", times);
//    times = 0;
//    for (int i = 0; i < n - 1; i++) {
//        qsort(p, n, sizeof(int), cmp1);
//        p[0] = p[0] + p[1];
//        times += p[0] - 1;
//        p[1] = 100000;
//    }
//    printf("%d\n", times);
//    return 0;
//}