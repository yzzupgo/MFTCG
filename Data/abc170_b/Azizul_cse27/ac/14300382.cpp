#include<bits/stdc++.h>
#define sz 100002
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define TEST() int test;cin>>test; while(test--)
#define FAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
FAST();
ll int n,m,a,b,res,ara[sz];
cin>>n>>m;
if(m%2||m/2<n){cout<<"No"<<endl;return 0;}
res=m/2;
if(res>n*2)cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}
