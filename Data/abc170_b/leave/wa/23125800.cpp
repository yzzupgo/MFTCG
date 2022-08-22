#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define spu ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int x,y;
int main()
{
cin>>x>>y;
int a=2*x-y/2;
int b=y-2*x;
if(!(a<=0&&b<=0)) cout<<"Yes";
else cout<<"No";
}
