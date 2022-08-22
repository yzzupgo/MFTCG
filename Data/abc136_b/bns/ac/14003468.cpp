#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);i++)
#define adrep(i,s,n) for (int i=(s);i<(n);i++)
using namespace std;
typedef long long ll;
int main(){
ll N;
cin>>N;
int count=0;
rep(i,N+1){
if(i==0)continue;
string s=to_string(i);
if(s.length()%2==1)count++;
}
cout<<count<<endl;
}
