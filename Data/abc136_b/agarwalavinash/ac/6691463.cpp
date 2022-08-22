#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n < 10)
cout<<(n)<<endl;
if(n >= 10 && n < 100)
cout<<9<<endl;
if(n >= 100 && n < 1000)
cout<<(9 + (n-100+1))<<endl;
if(n >= 1000 && n < 10000)
cout<<(999-100+10)<<endl;
if(n >= 10000 && n < 100000)
cout<<((999-100+10)+(n-10000+1))<<endl;
if(n >= 100000)
cout<<((999-100+10)+(99999-10000+1))<<endl;
return 0;
}
