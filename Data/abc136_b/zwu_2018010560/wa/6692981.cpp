#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n<=9)cout<<n;
else if(n<=999)cout<<9+n-100+1;
else if(n<100005)cout<<9+899+1+n-10000;
return 0;
}
