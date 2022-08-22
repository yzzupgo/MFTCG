#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int tmp = y - 2*x;
if(tmp > 2*x){
cout<<"No";
return 0;
}
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
for(int i = 0;i <= x;i++){
int k = x-i;
for(int j = 0;j <= k;j++){
if(i*2 + j*4 == y){
yes = true;
}
}
}
if(yes){
cout<<"Yes";
}else{
cout<<"No";
}
return 0;
}
