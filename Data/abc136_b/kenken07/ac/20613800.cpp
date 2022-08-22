#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
int main() {
int n,cnt=0;
cin >> n;
for(int i = 0; i <= n; i++){
string sum = to_string(i);
if(sum.size() %2 == 1){
cnt++;
}
}
cout << cnt - 1 << endl;
}
