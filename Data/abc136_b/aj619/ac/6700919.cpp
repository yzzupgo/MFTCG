#include<bits/stdc++.h>
#define ll long long
#define speed_up ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
#define MAX 1000000007
using namespace std;
int main()
{
speed_up
ll n;cin>>n;
if(n<=9) cout<<n;
else if(n>9 &&n<=99) cout<<9;
else if(n>=100 &&n<=999) cout<<(n-100+1+9);
else if(n>999 &&n<=9999) cout<<909;
else if(n>=10000 &&n<=99999) cout<<(909+n-10000+1);
else cout<<(909+90000);
return 0;
}
