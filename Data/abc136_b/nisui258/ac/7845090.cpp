#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
int N;
cin >>N;
int ans = 0;
for(int i = 1;i < N+1;i++){
if(1 <= i && i < 10) ans++;
if(100 <= i && i < 1000) ans++;
if(10000 <= i && i < 100000) ans++;
if(1000000 <= i && i < 100000000) ans++;
}
cout << ans << endl;
}
