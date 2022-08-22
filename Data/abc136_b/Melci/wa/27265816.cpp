#include<bits/stdc++.h>
#include <algorithm>
#include <functional>
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include <bits/stdc++.h>
#define rep(i,n) REP(i, 0, n)
#define REP(i,a,n) for(int i = a ; i < (int)n ; i++)
#define all(x) (x).begin(),(x).end()
#define mod 1000000007
const long long INF = 1LL << 60;
typedef long long ll;
using namespace std;
int GetDigit(int num){
int digit=0;
while(num!=0){
num /= 10;
digit++;
}
return digit;
}
int main()
{
int n,ans;
cin>>n;
ans = 0;
for(int i = 1;i<n;i++){
if(GetDigit(i)%2 != 0)ans++;
}
cout<<ans<<endl;
}
