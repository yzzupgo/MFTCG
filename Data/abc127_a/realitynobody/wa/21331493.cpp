#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
int main(void){
int a, b;
cin >> a >> b;
if(b >= 13) cout << b << endl;
else if(6 <= b && b <= 12) cout << b / 2 << endl;
else if(b <= 5) cout << 0 << endl;
return 0;
}
