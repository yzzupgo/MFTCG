#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)
using ll = long long;
using P = pair<int,int>;
int main(){
int n,l,sum=0,absmin=2000; cin>>n>>l;
vector<int> t(n);
rep(i,n) t.at(i)=l+i-1, sum+=t.at(i), absmin=min(absmin,t.at(i));
cout<<sum-absmin<<endl;
}
