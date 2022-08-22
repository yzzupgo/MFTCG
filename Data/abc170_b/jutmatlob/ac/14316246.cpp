#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int x,y;
cin>>x>>y;
int r=4*x;
if(r>=y && y%2==0 && x<=y/2)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
