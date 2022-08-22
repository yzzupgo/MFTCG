#include <iostream>
using namespace std;
#define ll long long
ll x,y,a,b;
int main(){
cin>>x>>y;
b=(y-2*x)/2;
a=x-b;
if(a*2+4*b==y && b+a==x && a>=0 && b>=0) cout<<"Yes";
else cout<<"No";
}
