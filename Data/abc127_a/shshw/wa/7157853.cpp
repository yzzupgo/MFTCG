#include<iostream>
using namespace std;
int main(){
int A,B;
cin>>A>>B;
int ans;
if(B>=13){
ans = B;
}else if(B>=6){
ans = B/2;
}else{
ans = 0;
}
cout<<ans<<endl;
}
