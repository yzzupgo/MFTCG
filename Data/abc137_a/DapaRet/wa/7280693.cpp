#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int ans = -100000000;
ans = max(a+b,ans);
ans = max(a-b,ans);
ans = max(a+b,ans);
cout<<ans;
}
