#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
const int MOD=1000000007;
const double PI=3.1415926535;
int main(){
int N,L;
cin>>N>>L;
int R=N+L-1;
if(L>0){
cout<<(L+1+R)*(N-1)/2<<endl;
}else if(R<0){
cout<<(L+R-1)*(N-1)/2<<endl;
}else{
cout<<0<<endl;
}
}
