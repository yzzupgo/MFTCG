#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
ll n;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
int sum=0;
int digits=log10(n)+1;
if(1<digits) sum+=9;
if(3<digits) sum+=900;
if(5<digits) sum+=90000;
if(digits==1) sum+=n;
if(digits==3) sum+=n-99;
if(digits==5) sum+=n-99999;
cout<<sum<<endl;
return 0;
}
