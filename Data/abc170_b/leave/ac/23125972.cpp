#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define spu ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int x,y;
int main()
{
cin>>x>>y;
int a=4*x-y;
int b=y-2*x;
if(y>=2*x&&y<=4*x&&y%2==0) cout<<"Yes";
else cout<<"No";
}
