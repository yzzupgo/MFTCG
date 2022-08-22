#include <bits/stdc++.h>
using namespace std;
int main(){
int n,a,sum=0;
cin>>n;
int m=n;
for(int i=1;;i++){
n/=10;
if(n==0){
a=i;
break;
}
}
if(a<=2){
if(m>=10) sum=9;
else sum=m;
}
else if(a<=4){
sum+=9;
if(a==3) sum+=m-100+1;
else sum=909;
}
else{
sum+=909;
if(a==5) sum+=m-10000+1;
else sum=90909;
}
cout<<sum;
}
