#include <iostream>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
if(y%2!=0)
{
cout<<"NO";
return 0;
}
if(y%2==0){
if(y>=x*2 && y<=x*4){
cout<<"YES";
return 0;
}
}
cout<<"NO";
return 0;
}
