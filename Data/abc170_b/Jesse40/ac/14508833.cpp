#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;cin>>x>>y;
if(y%2==1){cout<<"No"<<endl;return 0;}
y/=2;
if(x<=y&&y<=(2*x))cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
