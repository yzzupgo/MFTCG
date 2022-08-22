#include <bits/stdc++.h>
using namespace std;
int main(){
int n,res=0,flag=0;
cin >> n;
if((n/10)!=0){
res+=9;
}else{
flag = 1;
res +=n;
}
if((n/1000)!=0&&flag!=1){
res+=999-99;
}else if(flag!=1){
flag = 1;
if(n<100){
}else{
res+=n-99;
}
}
if((n/100000)!=0&&flag!=1){
res+=99999-9999;
}else if(flag!=1){
flag = 1;
if(n<10000){
}else{
res+=n-9999;
}
}
cout << res <<endl;
}
