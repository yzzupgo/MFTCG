#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int x ,y;cin >> x >>y;
int kame = 1;
while(kame < x){
if(y == 2 * kame + (x - kame) * 4){
cout << "Yes" <<endl;
return 0;
}
kame++;
}
cout << "No" <<endl;
return 0;
}
