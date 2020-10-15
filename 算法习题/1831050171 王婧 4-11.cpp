//#include<iostream>
//#include<string.h>
//using namespace std;
//
//void del(char* a, int i) {
//    int len = strlen(a);
//    int j=i;
//    for (int j = i; j < len - 1; j++) {
//        a[j] = a[j + 1];
//    }
//    a[j] = '\0';
//}
//
//void delNum(char* a, int k) {
//    int len = strlen(a);
//    while (k > 0) {
//        for (int i = 0; i < len - 1 && a[i] <= a[i + 1]; i++)
//        {  
//            del(a, i);
//            k--;
//        }
//      
//    }
//}
//
//
//int main() {
//    char a[200], temp[50][200];
//    int k, c = 0;
//
//    while (1) {
//        cin >> a;
//        if (a[0] == '0' && strlen(a) == 1) {
//            break;
//        }
//        cin>>k;
//        delNum(a, k);
//        int i = 0;
//        while (a[i] != '\0') {
//            temp[c][i] = a[i];
//            i++;
//        }
//        temp[c][i] = '\0';
//        c++;
//    }
//
//    for (int i = 0; i < c; i++)
//        cout<<temp[i]<<endl;
//
//    return 0;
//}
//
