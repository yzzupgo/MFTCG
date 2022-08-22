#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
int X,Y;
cin>>X>>Y;
if(((4*X-Y)%2==0&&4*X>=Y)&&((Y-2*X)%2==0&&Y>=2*X)){
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
return 0;
}
