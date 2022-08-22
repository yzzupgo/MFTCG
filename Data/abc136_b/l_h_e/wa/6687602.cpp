#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e9;
const ll mod = 1e9+7;
int main(){
int n;
cin>>n;
int cnt = 0;
int d = 0;
for(int i=1;i<=n;i++){
if(i>=1&&i<10)cnt++;
if(i>=100&&i<1000)cnt++;
if(i>10000&&i<1e6)cnt++;
}
cout<<cnt<<endl;
}
