#include<bits/stdc++.h>
using namespace std;
int main(){
long int n;
cin>>n;
int count=9;
if(n<=9){ cout<<n;return 0;}
if(n<100){
cout<<9;return 0;
}
if(n==100){
cout<<10;
return 0;
}
if(n>=999){
count = count+900;
}
else if(n>=100 && n<999){
count = count+n-100+1;
cout<<count;
return 0;
}
if(n==10000){
count++;
cout<<count;return 0;
}
if(n>=99999){
count = count+90000;
cout<<count;
}
else if(n>=10000 && n<99999){
count = count+n-10000+1;
cout<<count;
}
return 0;
}
