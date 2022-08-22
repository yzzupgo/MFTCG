#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int x,y;
cin>>x>>y;
int sol_x,sol_y;
sol_y = (y-2*x)/2;
sol_x = x - sol_y;
if(sol_y <0 || sol_x<0){
cout<<"No\n";
}else if(sol_y==0&&sol_x==0){
cout<<"No\n";
}else{
cout<<"Yes\n";
}
return 0;
}
