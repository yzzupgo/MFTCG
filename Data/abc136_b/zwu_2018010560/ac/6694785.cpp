#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n<=9)cout<<n;
else if(n<100)cout<<9;
else if(n<=999)cout<<9+n-100+1;
else if(n<10000)cout<<909;
else if(n<=99999)cout<<9+899+1+1+n-10000;
else cout<<90909;
return 0;
}
