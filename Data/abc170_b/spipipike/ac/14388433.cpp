#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; ++i)
#define repit(it,li) for(auto it=li.begin(); it!=li.end(); it++)
#define ll long long int
int main(){
int x, y;
cin>>x>>y;
if(2*x<=y && y<=4*x && y%2==0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
