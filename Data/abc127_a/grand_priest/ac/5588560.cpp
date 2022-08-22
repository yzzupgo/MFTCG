#include<bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
FastIO;
int n,c;
cin>>n>>c;
if(n>12)cout<<c;
else if(n>=6&&n<=12)cout<<c/2;
else cout<<0;
}
