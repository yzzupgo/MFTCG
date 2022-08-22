#include <iostream>
using namespace std;
#define ll long long int
int main() {
int x,y;
cin>>x>>y;
if(y%2!=0)
{
cout<<"No";
return 0;
}
if(y>=x*2 && y<=x*4){
cout<<"Yes";
}
cout<<"No";
return 0;
}
