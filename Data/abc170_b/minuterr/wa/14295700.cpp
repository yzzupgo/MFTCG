#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include<algorithm>
#include <iomanip>
#include <math.h>
#define db double
#define vi vector<int>
#define pb push_back
#define fi first
#define se second
#define ll long long
#define ld long double
#define maxn 5005
#define mod 998244353
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector<ll>
#define vpi vector<pii>
#define vpll vector<pll>
#define vv(z,a,b) vector<vector<int>>z(a,vector<int>(b))
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(c) begin(c),end(c)
using namespace std;
int main(){
int x,y;
cin>>x>>y;
for(int i=1;i<=x;i++){
int sum=2*i+4*(x-i);
if(sum==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
