#include <bits/stdc++.h>
using namespace std;
int main() {
int n, m;
cin >> n >> m;
vector<int> h(n);
int ans=100000;
int flag;
for(int i=0;i<n;i++){
h.at(i)=m+i;
if(ans>=abs(m+i)){
if(m+i<0){
flag=0;
}
else{
flag=1;
}
}
ans=min(ans,abs(m+i));
}
int sum=0;
for(int i=0;i<n;i++){
sum+=h.at(i);
}
if(flag=0){
cout << sum-ans << endl;
return 0;
}
else{
cout << sum+ans << endl;
return 0;
}
}
