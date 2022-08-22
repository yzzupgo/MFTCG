#include <iostream>
using namespace std;
#define ll long long
int main()
{
int x,y;
cin>>x>>y;
int a=(y-2*x)/2;
if(a==0 || y-x-3*a==0){
cout<<"NO";
}else{
cout<<"YES";
}
}
