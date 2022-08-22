#include<iostream>
using namespace std;
void solve(){
int a,b;cin>>a>>b;
if(b%2!=0){
cout<<"No"<<endl;return;
}
else{
for(int i=0;i<=a;i++){
if((4*(i)+2*(a-i))==b){
cout<<"Yes"<<endl;return;
}
}
cout<<"No"<<endl;return;
}
}
int main(){
solve();
}
