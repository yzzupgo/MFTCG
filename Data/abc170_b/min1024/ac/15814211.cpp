#include<iostream>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
int main(){
int x,y;
cin >>x>>y;
if(y%2){
cout << "No";
return 0;
}
y=y/2;
if(x<=y && y<=2*x){
cout <<"Yes";
return 0;
}
cout << "No";
return 0;
}
