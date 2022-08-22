#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main(){
int n;
cin >> n;
if(n < 10) cout << n << endl;
else if(10 <= n && n <= 99) cout << 9 << endl;
else if(n < 10000) cout << (n-99)+9 << endl;
else if(n < 1000000) cout << (n-9999)+900+9 << endl;
return 0;
}
