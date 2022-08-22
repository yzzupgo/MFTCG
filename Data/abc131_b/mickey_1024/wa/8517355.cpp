#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<type_traits>
#include<numeric>
#include<iomanip>
#include<set>
#include<tuple>
#include<map>
using namespace std;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<char> VC;
typedef long long int ll;
#define INF 1e9
#define NUM 1000000007
#define all(x) begin(x), end(x)
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int dp[110][10010]={};
int main() {
int n,l;
cin>>n>>l;
int sum=0,a=l;
rep(i,n){
sum+=a;
a+=1;
}
if(sum==0){
cout<<sum<<endl;
}else if(l>0){
cout<<sum-l<<endl;
}else{
cout<<sum-(l+n-1)<<endl;
}
}
