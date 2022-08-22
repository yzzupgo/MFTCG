#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int sum=a*(2*b+a-1)/2;
if(a+b>0 && b<=0) cout<<sum<<endl;
else if(b<0) cout<<sum-(b+a-1)<<endl;
else cout<<sum-b<<endl;
return 0;
}
