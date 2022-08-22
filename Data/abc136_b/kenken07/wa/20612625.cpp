#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define _GLIBCXX_DEBUG
using ll = long long;
int main() {
int n,cnt=0;
cin >> n;
for(int i = 0; i < n; i++){
if(i >= 0 && i <= 9 || i >= 100 && i <= 999 || i >= 10000 && i <= 99999){
cnt++;
}
}
cout << cnt -1 << endl;
}
