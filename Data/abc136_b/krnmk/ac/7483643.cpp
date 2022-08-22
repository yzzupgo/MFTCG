#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>> n;
int ans=0;
int high,low;
for (int i=0; i<5; i+=2){
high=pow(10,i+1);
low=pow(10,i);
if (high<=n) ans+=9*low;
else if (low<=n) {
ans+=n-low+1;
break;
}
else break;
}
cout<< ans <<endl;
}
