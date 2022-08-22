#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main(){
int n;
cin >> n;
if(n < 10) cout << n << endl;
else if(n <= 99) cout << 9 << endl;
else if(n < 1000) cout << (n-99)+9 << endl;
else if(n <= 9999) cout << 909 << endl;
else if(n < 100000) cout << (n-9999)+900+9 << endl;
else cout << 90909 << endl;
return 0;
}
