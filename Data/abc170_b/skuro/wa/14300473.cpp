#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(v) v.begin(), v.end()
#define PB(N) push_back(N)
using namespace std;
using Graph = vector<vector<int>>;
int main(){
int X,Y;
cin >> X >> Y;
bool flag=0;
for(int i=1;i<=X;i++){
int j = X-i;
if(Y==i*2+j*4) flag=1;
}
if(flag) cout << "Yes";
else cout << "No";
return 0;
}
