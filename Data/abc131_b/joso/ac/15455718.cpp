#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
const ll INF = 1LL << 60;
int main(){
int n,l;
cin >> n >> l;
int taste=0;
for(int i=1; i<=n; i++){
taste += l+i-1;
}
int eat=10000;
for(int i=1; i<=n; i++){
if(abs(eat)>abs(l+i-1)){
eat = l+i-1;
}
}
cout << taste-eat << endl;
}
