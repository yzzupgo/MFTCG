#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x;
int y;
cin>>x>>y;
bool ok = true;
ok &= x < y && y%2 == 0;
ok &= 2*x <= y && 4*(x-(x%2&&x>1)) >= y;
cout<<(ok ? "Yes" : "No")<<endl;
}
