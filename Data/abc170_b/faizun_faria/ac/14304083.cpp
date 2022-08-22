#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int x= a*2;
int y = a*4;
if(b>=x && b<=y && b%2==0){
cout<<"Yes\n";
}else {
cout<<"No\n";
}
}
