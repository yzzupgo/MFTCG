#include <iostream>
using namespace std;
#define ll long long
int main()
{
int x,y;
cin>>x>>y;
if(y%2!=0){
cout<<"No"<<"\n";
}
int a=(y-2*x)/2;
int c=x-a;
if(a<0 || c<0){
cout<<"No"<<"\n";
}else{
cout<<"Yes"<<"\n";
}
}
