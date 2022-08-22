#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n,l; cin>>n>>l;
int teist[n];
for(int i=0;i<n;i++){
teist[i]=l+i+1-1;
}
int mint=300;
int mina;
for(int i=0;i<n;i++){
if(abs(teist[i])<mint){
mint=abs(teist[i]);
mina=i;
}
}
int ans=0;
for(int i=0;i<n;i++){
if(i!=mina) ans+=teist[i];
}
cout<<ans<<endl;
return 0;
}
