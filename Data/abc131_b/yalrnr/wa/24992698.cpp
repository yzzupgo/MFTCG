#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep0(i,n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i,n) for(int i = 1; i <= int(n); ++i)
#define ll long long
#define mod 1000000007
int main() {
fast_io;
int n,l;
cin>>n>>l;
int val=1e8;
vector<int> v(n);
rep0(i,n){
v[i]=l+i;
val=min(val,abs(v[i]));
}
int sum=0;
accumulate(v.begin(), v.end(), sum);
if(sum<0){
sum+=val;
}
else{
sum-=val;
}
cout<<sum;
return 0;
}
