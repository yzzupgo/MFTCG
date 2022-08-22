#include<bits/stdc++.h>
#include<iomanip>
#define fast {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define ld long double
#define pb push_back
#define N 10000007
typedef long long int ll;
using namespace std;
int main(void){
fast;
ll x,y;
cin>>x>>y;
ll ans=4*x-y;
if(ans%2==0){
if(ans/2<=x&&ans/2>=0)
cout<<"YES";
else
cout<<"NO";
}
else
cout<<"No";
}
