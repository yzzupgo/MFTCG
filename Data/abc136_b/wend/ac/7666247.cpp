#include<iostream>
using namespace std;
int main(){
int N;
cin>>N;
int ans=0;
if(N<10)ans=N;
else if(N<100)ans=9;
else if(N<1000)ans=N-90;
else if(N<10000)ans=909;
else if(N<100000)ans=N-9090;
else ans=90909;
cout<<ans<<endl;
}
