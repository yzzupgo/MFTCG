#include <bits/stdc++.h>
#define r(i,n) for(int i = 0; i<n; i++)
typedef long long ll;
using namespace std;
typedef pair<int,int> P;
const ll mod=1000000007;
int main() {
int x,y;
cin >> x >> y;
if((4*x-y)%2==0&&4*x-y>=0&&(y-2*x)%2==0&&y-2*x>=0)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
