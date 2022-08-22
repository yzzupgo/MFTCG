#include <bits/stdc++.h>
#define rep(i,a,b) for (int i=a;i<b;i++)
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if(a<6) cout << 0 << endl;
else if(a<13) cout << b/2 << endl;
else cout << b << endl;
}
