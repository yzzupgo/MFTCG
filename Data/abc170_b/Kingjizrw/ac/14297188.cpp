#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int x,y;
int main(){
ios::sync_with_stdio(false);
cin>>x>>y;
if(2*x<=y&&y<=4*x&&y%2==0)
cout<<"Yes";
else
cout<<"No";
return 0;
}
