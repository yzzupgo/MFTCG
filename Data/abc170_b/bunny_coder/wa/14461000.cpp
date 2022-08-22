#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout <<#x <<" = "<< x <<"\n"
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) int x; cin>>x; while(x--)
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int a, l;
cin >> a >> l;
if( l / a >= 2 && l / a <= 4 && !(l & 1)){
cout << "Yes";
}
else
cout << "No";
return 0;
}
