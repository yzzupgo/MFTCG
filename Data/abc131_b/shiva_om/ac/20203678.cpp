#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define shivam main
#define pb push_back
#define forl for(ll i=0; i<n ;i++)
#define cina cin>>
#define couta cout<<
int shivam () {
ll n,l;
cin>>n>>l;
ll sum =0, mini=INT_MAX;
forl {
ll po = i+l;
sum+= po;
mini = (abs(mini) < abs(po)) ? mini : po;
}
cout<<sum-mini;
return 0;
}
