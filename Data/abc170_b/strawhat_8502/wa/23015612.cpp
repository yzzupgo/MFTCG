#include<iostream>
#include<string>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i++){
for(int j=0;j<=x-i;j++){
if(i*2+j*4==y){
cout<<"Yes";
return 0;
}
}
}
cout<<"No";
return 0;
}
