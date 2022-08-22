#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string>
#include <vector>
#include <cstdio>
#include <iomanip>
#define ll long long
#define rep2(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define rep3(i,a,b) for(int i=a;i>=b;i--)
#define REP(e,v) for(auto e:v)
#define queint queue<int>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pq priority_queue<int>
#define pqg priority_queue<int,vec,greater<int>>
#define pb push_back
#define vec vector<int>
#define vecvec vector<vector<int>>
#define vecll vector<ll>
#define vecvecll vector<vector<ll>>
#define bs binary_search
#define All(c) (c).begin(),(c).end()
#define mp make_pair
using namespace std;
int in(){int x;scanf("%d",&x);return x;}
string stin(){string s;cin>>s;return s;}
ll lin(){ll x;scanf("%lld",&x);return x;}
int main(){
int n=in(),l=in();
int s=(l*2+n-1)*n/2;
int k=l;
if(l<0&n+l-1>=0) k=0;
else if(l<0)k=n+l-1;
cout<<s-k<<endl;
}
