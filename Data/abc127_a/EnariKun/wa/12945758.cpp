#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std;
int main() {
int a,b,c,d,x;
double da,db;
string s,ss,sss;
int ans = 0;
string anss = "";
cin >> a;
int ab [] = {0 , 1 , 3 , 1 , 2 , 1 , 2 , 1 , 1 , 2 , 1 , 2 , 1};
int result3 = std::max({a, b, c});
if(a>=13) ans = b;
else if(a>= 6) ans = b/2;
else ans = 0;
cout << ans << endl;
}
