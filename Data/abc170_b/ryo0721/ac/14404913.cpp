#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using LL = long long;
using P = pair<int,int>;
int main(){
int x, y;
cin >> x >> y;
if(y%2==0&&2*x<=y&&y<=4*x){
cout << "Yes" << endl;
}
else cout << "No" << endl;
return 0;
}
