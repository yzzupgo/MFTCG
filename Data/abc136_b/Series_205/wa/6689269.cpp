#include <iostream>
using namespace std;
int main(){
int n,ans=0;
cin>>n;
for(int i=1;i<n;i*=100){
if(i*10-1<=n){
ans+=(i*9);
}else{
ans+=(n-i+1);
}
}
cout<<ans<<endl;
return 0;
}
