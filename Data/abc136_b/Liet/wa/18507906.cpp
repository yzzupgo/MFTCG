#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int ans = 0;
for(int i = 0; i<N; i++){
if(i<10) ans++;
if(100 <= i <= 999) ans++;
if(10000 <= i <=99999) ans++;
}
cout << ans << endl;
}
