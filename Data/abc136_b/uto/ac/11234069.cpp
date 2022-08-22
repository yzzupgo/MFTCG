#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<cstdio>
using namespace std;
int main(){
int n;cin>>n;
int ans=0;
for(int i=1;i<=n;i++)if(to_string(i).size()%2==1){
ans++;
}
cout<<ans<<endl;
}
