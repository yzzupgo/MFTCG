#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <limits.h>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <queue>
#include <stack>
#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++)
using namespace std;
int main() {
long long int N, K, ans = 0, now = 0, flag = 0, len = 0 ;
int i = 0, j = 0, cas ;
cin >> N ;
ans = N * 108 / 100 ;
if(ans < 206) {
cout << "Yay!" << endl ;
} else if(ans == 206) {
cout << "so-so" << endl ;
} else {
cout << ":(" << endl ;
}
return 0 ;
}
