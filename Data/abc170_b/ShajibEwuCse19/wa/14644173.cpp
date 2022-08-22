#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b;cin>>a>>b;
int x =a*4;
int y=a*2;
int z=(a-1)*2;z+=4;
if(x==b||y==b||z==b)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
