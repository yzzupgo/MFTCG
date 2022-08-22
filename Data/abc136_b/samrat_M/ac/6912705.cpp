#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int no=floor(log10(n)+1),res=no/2,sum=0;
if(no%2==0)
{
while(res--){
no-=2;
sum=sum+(9*pow(10,no));
}
cout<<sum<<endl;
}
else{
sum+=(n-pow(10,(no-1)));
no--;
while(res--){
no-=2;
sum+=(9*pow(10,no));
}
cout<<sum+1<<endl;
}
return 0;
}
