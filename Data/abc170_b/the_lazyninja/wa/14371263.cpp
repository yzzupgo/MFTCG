#include<iostream>
using namespace std;
void solve(){
int a,b;cin>>a>>b;
if(b%2!=0){
cout<<"No"<<endl;return;
}
else{
if(b/4<=a && a<=b){
cout<<"Yes"<<endl;return;
}
else{
cout<<"No"<<endl;return;
}
}
}
int main(){
solve();
}
