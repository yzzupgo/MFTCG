#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int x,y;
cin>>x>>y;
if(y>=2*x and (y-2*x)%2==0 and x>=(y-2*x)/2) cout<<"Yes";
else cout<<"No";
}
