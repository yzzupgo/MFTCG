#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(s,i,n) for (int i = (int)s; i < (int)(n); i++)
#define pb push_back
typedef long long ll;
int main(){
int n,l;
cin>>n>>l;
int aji=0;
rep(i,n){
aji+=l+i;
}
int naji=10000;
int k=0;
rep(i,n){
rep(j,n){
if(i!=j)k+=l+j;
}
if(naji<abs(aji-k)){
naji=k;
}
k=0;
}
cout<<naji<<endl;
return 0;
}
