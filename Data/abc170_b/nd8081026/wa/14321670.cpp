#include <iostream>
using namespace std;
int main()
{
int x,y;
int ans;
cin>>x>>y;
if(y/x<=4){
if(y%x==0){
cout<<"Yes";
}
else if(y%2!=0){
cout<<"No";
}
else{
cout<<"Yes";
}
}
else{
cout<<"No";
}
return 0;
}
