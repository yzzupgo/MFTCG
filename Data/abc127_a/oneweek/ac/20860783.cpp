#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main() {
int A, B;
cin >> A >> B;
if(A < 6){
cout << 0 << endl;
}
else if(A < 13){
cout << B / 2 << endl;
}
else{
cout << B << endl;
}
return 0;
}
