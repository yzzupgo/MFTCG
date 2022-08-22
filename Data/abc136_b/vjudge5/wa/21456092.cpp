#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,ct=0,fc=0,mul=1;
cin>>n;
int temp=n;
while(temp!=0){
temp=temp/10;
ct++;
}
for(int i=1;i<=ct;i++){
if(i==1) fc+=9;
else if(i%2==1) {
if(i==ct){
int res=n%mul;
fc+=(res+1);
break;
}
else {fc+=(mul*9);}
}
mul*=10;
}
cout<<fc;
return 0;
}
