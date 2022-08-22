#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(y%2 != 0){
cout<<"No";
}
bool yes = false;
for(int i = 0;i <= x;i++){
for(int j = 0;j <= x;j++){
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
