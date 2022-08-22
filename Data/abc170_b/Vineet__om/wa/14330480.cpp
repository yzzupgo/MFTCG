#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main() {
ll x,y;
cin>>x>>y;
ll rem=y%x;
ll div=y/x;
if((rem==2 ||rem==4)&& (div==2||div==4)){
cout<<"YES"<<endl;
}
else if(x==1&&y==2){
cout<<"YES"<<endl;
}
else if(x==1&& y==4){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
return 0;
}
