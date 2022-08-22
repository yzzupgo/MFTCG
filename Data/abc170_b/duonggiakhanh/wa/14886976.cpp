#include <iostream>
using namespace std;
#define ll long long
ll x,y,a,b;
int main(){
cin>>x>>y;
if((x==0 && y>0) || (x==y)) { cout<<"No"; return 0; }
b=(y-2*x)/2;
a=x-b;
if(a>=0 && b>=0 ) cout<<"Yes";
else cout<<"No";
}
