#include<iostream>
using namespace std;
#define ll long long
int main(){
ll a,l;
cin>>a>>l;
if(l<a*2 || l>a*4)
cout<<"No";
else if((l/a+l%a)%2==0)
cout<<"Yes";
else
cout<<"No";
}
