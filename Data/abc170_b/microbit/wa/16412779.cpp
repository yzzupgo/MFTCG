#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=0;(i)<(n);i++)
#define INF 1001001001
#define LLINF 1001001001001001001
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define ALL(v) v.begin(), v.end()
typedef long long ll;
int main(){
int x,y;
cin >> x >> y;
for(int i =1;i<101;i++){
for(int j=1;j<101;j++){
if(i+j==x and 2*i+4*j==y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" <<endl;
return 0;
}
