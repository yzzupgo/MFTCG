#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
int x, y; cin >> x>> y;
int t = (y/2)-x;
int c = x - t;
if(t>=0 && c>=0) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
