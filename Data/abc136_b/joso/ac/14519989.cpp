#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;
int main(){
int n;
cin >> n;
int count=0;
for(int i=1; i<=n; i++){
if(i/10 == 0) count ++;
else if(i/100 == 0) continue;
else if(i/1000 == 0) count++;
else if(i/10000 == 0) continue;
else if(i/100000 == 0)count++;
else continue;
}
cout << count << endl;
}
