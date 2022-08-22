#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep3(i,m,n) for(int (i)=m;(i)<=(n);(i)++)
#define rep3rev(i,m,n) for(int (i)=m;(i)>=(n);(i)--)
#define all(a) (a.begin()),(a.end())
#define rall(a) (a.rbegin()),(a.rend())
#define fi first
#define se second
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
void Main()
{
int n, l;
cin >> n >> l;
int ans;
if(l>=0){
ans = (n-1)*n/2 + (n-1)*l;
}
else if(n+l>0){
ans = (n-1)*n/2 + n*l;
}
else{
ans = (n-1)*(n-2)/2 + (n-1)*l;
}
cout << ans << endl;
return;
}
int main()
{
cin.tie(nullptr);
ios_base::sync_with_stdio(false);
cout << fixed << setprecision(15);
Main();
return 0;
}
