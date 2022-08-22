#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,tasu=0,hiku=0,kakeru=0,saidai;
cin>>a>>b;
tasu=a+b;
hiku=a-b;
kakeru=a*b;
if(tasu>=hiku && tasu>=kakeru)cout<<tasu<<endl;
if(hiku>=tasu && hiku>=kakeru)cout<<hiku<<endl;
if(kakeru>=tasu && kakeru>=hiku)cout<<kakeru<<endl;
return 0;
}
