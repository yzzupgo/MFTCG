#include<cstdio>
#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(y%2==1)cout<<"No"<<endl;
else if(x/2<y)cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
