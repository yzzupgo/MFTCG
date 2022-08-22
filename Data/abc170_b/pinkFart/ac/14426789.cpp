#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
int x,y; cin >> x>>y;
int a = ((4*x)-y)/2, b=(y-(2*x))/2;
if(a >= 0 && b >= 0){
if(a+b==x && 2*a+4*b==y) cout << "Yes\n";
else cout<<"No\n";}
else cout<<"No\n";
}
