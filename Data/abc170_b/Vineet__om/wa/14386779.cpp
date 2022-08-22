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
cout<<"Yes"<<endl;
}
else if(x==1&&y==2){
cout<<"Yes"<<endl;
}
else if(x==1&& y==4){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
return 0;
}
