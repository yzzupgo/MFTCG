#include <bits/stdc++.h>
using namespace std;
bool check(int n){
int cnt=0;
while(n!=0){
n/=10;
cnt++;
}
if(cnt%2!=0)return true;
return false;
}
int main(){
int N,cnt=0;
cin>>N;
for(int i=1;i<=N;i++){
if(check(i))cnt++;
}
cout<<cnt;
return 0;
}
