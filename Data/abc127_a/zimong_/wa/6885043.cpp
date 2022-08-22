#include <bits/stdc++.h>
using namespace std;
int A,B;
int main(){
cin >> A >> B;
if(0<A<6) cout << 0 << endl;
else if(5 < A < 13) cout << B/2 << endl;
else cout << B << endl;
}
