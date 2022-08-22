#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include<map>
#include<string.h>
#include <algorithm>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define replb(i,a,b) for(ll i=a;i>=b;i--)
#define repl(i,a,b) for(ll i=a;i<b;i++)
#define repv(arr) for(auto it=arr[i].begin();it!=arr[i].end();it++)
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long int>
#define Vi vector<vector<int>>
#define sortA(arr) sort(arr.begin(),arr.end())
#define ssort stable_sort(arr.begin(),arr.end())
#define search(arr,c) binary_search(arr.begin(),arr.end(),c)
#define pb push_back
#define ll long long
#define LCM(a,b) boost::math::lcm(a,b)
#define cl_bf cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define castl static_cast<ll>
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int x,y;cin>>x>>y;
if((!y%2)&&((2*x<=y)&&((4*x)>=y)))cout<<"Yes";
else cout<<"No";
return 0;
}
