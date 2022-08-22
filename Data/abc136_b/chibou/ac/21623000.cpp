#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1; i <= (n);i++)
#define _GLIBCXX_DEBUG
typedef long long ll;
const long long INF = 1001000100010001000;
int main(){
int n,ans = 0;
cin >> n;
rep(i,n){
string a = to_string(i);
int b = a.size();
if(b%2 == 1)ans++;
}
cout << ans << endl;
}
