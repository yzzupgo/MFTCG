#include<iostream>
#include<iomanip>
#include<bitset>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#include<queue>
#include<map>
#include<set>
using namespace std;
using ll=long long;
int main(){
int N, L;
cin >> N >> L;
int sum = 0, mi = 1000;
for(int i = 0; i < N; i++){
int taste = L + i;
sum += taste;
if(abs(taste) < abs(mi))mi = taste;
}
cout << sum - mi << endl;
return 0;
}
