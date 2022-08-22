#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n,l; cin>>n>>l;
vector<int> li(n);
for(int i=0;i<n;i++){
li[i]=l+i;
}
int minj=300;
int mini;
int ans=0;
for(int i=0;i<n;i++){
if((abs(li[i]))<minj){
minj=abs(li[i]);
mini=li[i];
}
ans+=li[i];
}
cout<<ans-mini<<endl;
return 0;
}
