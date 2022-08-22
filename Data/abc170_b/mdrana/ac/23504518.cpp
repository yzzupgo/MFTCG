#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int n,m;cin>>n>>m;
for(int i=0; i<=n;i++){
int sum=i*4+(n-i)*2;
if(sum==m){
cout<<"Yes\n";
return 0;
}
}
cout<<"No\n";
return 0;
}
