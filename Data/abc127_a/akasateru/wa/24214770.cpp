#include <bits/stdc++.h>
#define rep(i,a,b) for (int i=a;i<b;i++)
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if(a>=13) cout << b << endl;
else if(a<5) cout << 0 << endl;
else cout << b/2 << endl;
}
