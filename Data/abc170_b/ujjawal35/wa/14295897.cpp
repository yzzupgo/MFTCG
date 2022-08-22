#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int x,y;
cin>>x>>y;
int a=(2*x)-y/2;
if (y==a*2+(x-a)*4)
cout<<"Yes";
else cout<<"No";
}
