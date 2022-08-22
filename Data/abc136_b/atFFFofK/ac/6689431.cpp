#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int ans=n;
if(ans<10){cout<<n<<endl;}
else if(ans<100){cout<<9<<endl;}
else if(ans<1000){cout<<(9+ans-99)<<endl;}
else if(ans<10000){cout<<(10-1+1000-100)<<endl;}
else if(ans<100000){cout<<(10-1+1000-100+ans-10000+1)<<endl;}
else{cout<<(10-1+1000-100+100000-10000)<<endl;}
}
