#include <iostream>
using namespace std;
#define ll long long
int main()
{
int x,y;
cin>>x>>y;
int a=(y-2*x)/2;
int c=y-x-3*a;
if(a<0 || c<0){
cout<<"No";
}else{
cout<<"Yes";
}
}
