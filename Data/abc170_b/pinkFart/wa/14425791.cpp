#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
int x,y; cin >> x>>y;
int temp = (y/4)-1; int l= y-4*temp;
if(x-temp == (l)/2) cout<<"Yes\n"<<endl;
else cout<<"No\n"<<endl;
}
