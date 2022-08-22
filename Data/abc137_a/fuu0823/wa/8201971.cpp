#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,sum,hiku,kake;
cin>>a>>b;
sum=a+b;
hiku=a-b;
kake=a*b;
if(sum>=hiku && sum>=kake)
cout<<sum<<endl;
if(hiku>=sum && hiku>=kake)
cout<<hiku<<endl;
if(kake>=sum && kake>=hiku)
cout<<kake<<endl;
return 0;
}
