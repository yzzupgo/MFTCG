#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(y%2 != 0){
cout<<"No";
return 0;
}
bool yes = false;
if(y/2 == x){
cout<<"Yes";
return 0;
}
if(y/4 == x){
cout<<"Yes";
return 0;
}
int t = 0;
t = 2*x;
int tmp = 0;
tmp = y-t;
if(tmp%2 == 0){
yes = true;
}
if(yes){
cout<<"Yes";
}else{
cout<<"No";
}
return 0;
}
