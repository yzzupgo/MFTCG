#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
#define ll long long
int main(){
int a, b;
cin >> a >> b;
if(a >= 13) cout << b << endl;
else if(a >= 6 && a <= 12) cout << b/2 << endl;
else cout << 0 << endl;
}
