#include <bits/stdc++.h>
#include<vector>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep1(j,m) for (int j = 0; j <= (int)(m); j++)
int main(){
int x,y;
cin >> x >> y;
string ans = "No";
rep(a,50){
int b = x-a;
if(b<0) break;
int leg = 4*x-2*a;
if(leg == y){
ans = "Yes";
break;
}
}
cout << ans << endl;
}
