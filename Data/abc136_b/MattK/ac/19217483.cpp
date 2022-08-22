#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
long long n, x=0, t=0;
cin>>n;
while(n){
if(n>=10000 && n<100000){t++;}
if(n>=100 && n<=999){t++;}
if(n>0 && n<10){t++;}
n--;
}
cout<<t;
}
