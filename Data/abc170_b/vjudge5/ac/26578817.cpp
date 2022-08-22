#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define rep(i,start,end) for(int i=start;i<end;i++)
#define debug(x) cout << #x << " " << x << endl
#define print(container) cout <<#container << "  " ;for(auto it = container.begin(); it != container.end(); ++it)\
{ cout << *it << " ";} cout << endl;
ll const INF = 1e18;
using namespace std;
int main(){
int x, y; cin >> x >> y;
if((4*x-y)>=0 and (4*x-y)%2 == 0 and (y-2*x)>=0 and (y-2*x)%2 == 0)
cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
