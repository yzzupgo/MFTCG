#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF =1001001001;
using P = pair<int,int>;
int main(void)
{
int x, y;
cin >> x >> y;
if(y%2 != 0)
{
cout << "No" << endl;
return 0;
}
if(y <= (4 * x) && y >= 2*x){
cout <<"Yes" <<endl;
}
else cout << "No" << endl;
}
