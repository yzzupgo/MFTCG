#include<iostream>
using namespace std;
bool pd(int x){
int s;
while(x){
x/=10;
s++;
}
return s%2;
}
int main(){
int n,ans=0;
cin>>n;
for(int i=1;i<=n;i++){
if(pd(i))
ans++;
}
cout<<ans;
return 0;
}
