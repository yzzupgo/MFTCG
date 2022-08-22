#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector<int>
#define all(a) (a).begin(),(a).end()
#define F first
#define S second
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define int long long int
#define mod 1000000007
#define test int t;cin>>t;while(t--)
#define REP(i,a,b) for(int i=a,i<=b;i++)
#define MAXN 200001
int32_t main()
{
int n,l;
cin>>n>>l;
int arr[n+1];
int sum=0;
for(int i=1;i<=n;i++){
arr[i]=l+i-1;
sum+=arr[i];
}
int mx=INT_MAX;
for(int i=1;i<=n;i++){
mx=min(mx,abs(sum-(sum-arr[i])));
}
cout<<sum-mx<<endl;
return 0;
}
