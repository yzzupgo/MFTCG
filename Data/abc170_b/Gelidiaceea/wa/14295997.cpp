#include <bits/stdc++.h>
#include<iostream>
#include <ctype.h>
#include <sstream>
using namespace std;
using Graph = vector<vector<int>>;
#define itn int
using ll=int64_t;
#define rep(i,n) for (int i = 0; i < (int) (n); i++)
using vi = vector<int>;
using vll = vector<ll>;
long long gcd(long long a, long long b)
{if(a<b) swap(a,b);
if (a%b == 0){return(b);}
else{return(gcd(b, a%b));}
}
long long lcm(long long a, long long b)
{return a * b / gcd(a, b);}
long long bikkuri(long long k){
long long sum = 1;
for (long long i = 1; i <= k; ++i)
{
sum *= i;
}
return sum;
}
int main() {
int x,y;
cin>>x>>y;
if(2*x<=y&&y<=4*x){cout<<"YES";}
else cout<<"NO";
}
