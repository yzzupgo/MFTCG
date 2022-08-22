#include <iostream>
using namespace std;
int main(){
int n,ans=0;
cin>>n;
for(int i=1;i<n;i++){
int j=i,num=0;
while(j){
j/=10;
num++;
}
if(num%2==1)ans++;
}
cout<<ans<<endl;
return 0;
}
