#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define REP(i,n) for(int i=0, i ##_len=(n); i<i ##_len; ++i)
int main() {
int N,L;
int i, taste[1000], min = 1000, sum = 0;
cin >> N >> L;
REP(i, N){
taste[i] = L + i ;
sum += taste[i];
if( min > abs(taste[i]) ){
min = abs(taste[i]);
}
}
sum -= min;
cout << sum << endl;
}
