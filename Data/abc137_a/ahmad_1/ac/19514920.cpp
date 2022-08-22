#include <iostream>
using namespace std;
int main()
{
int a,b,ans,sum1,sum2;
cin>>a>>b;
ans=a*b;
sum1=a+b;
sum2=a-b;
if(ans>sum1 && ans>sum2){
cout<<ans;
}
else if(sum1>ans && sum1>sum2){
cout<<sum1;
}
else{
cout<<sum2;
}
}
