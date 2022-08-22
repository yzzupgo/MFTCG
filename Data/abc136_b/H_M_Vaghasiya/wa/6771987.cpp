#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX_INT 10e9
int main()
{
ll i,j,k,n;
cin>>n;
if(n<=9){
cout<<n<<endl;
return 0;
}
ll sum=0;
ll ans=10;
while(ans<=n){
sum+=ans -(ans/10);
ans=(ans*100);
}
int dig=0,m;
m=n;
while(m>0){
dig++;
m/=10;
}
if(dig%2==0)
cout<<sum<<endl;
else{
dig--;
sum+=n-pow(10,dig);
cout<<sum<<endl;
}
return 0;
}
