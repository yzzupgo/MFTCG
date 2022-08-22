#include <bits/stdc++.h>
#define rep(i,n) for(int i = 1;i <= (n);i++)
using namespace std;
int main(){
int n;
cin >> n;
int res = 0;
rep(i,n){
string s = to_string(i);
if (s.size()%2 != 0) res++;
}
cout << res << endl;
}
