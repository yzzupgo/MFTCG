#include<iostream>
#include<string>
#include<algorithm>
#include <stdio.h>
#include<iostream>
#include<iomanip>
#include<cmath>
#include<array>
#include<vector>
#include<set>
#include <utility>
#include <map>
using namespace std;
int digit(int n){
int count=0;
while(n/10>0){
n/=10;
count++;
}
return count+1;
}
int main(){
int n; cin>>n;
int ans=0;
int di=digit(n);
if(di ==1){
for(int i=1;i<=n;i++)
ans++;
cout<<ans<<endl;
return 0;
}
else if(di==2){
cout<<9<<endl;
return 0;
}
else if(di==3){
ans=9;
for(int i=100;i<=n;i++)
ans++;
cout<<ans<<endl;
return 0;
}
else if(di==4){
cout<<909<<endl;
}
else if(di==5){
ans=909;
for(int i=10000;i<=n;i++)
ans++;
cout<<ans<<endl;
}
else{
cout<<90909<<endl;
}
}
