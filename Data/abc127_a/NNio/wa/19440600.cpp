#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i = 0; i < (int)N; i++)
int main(){
int A, B;
cin >> A >> B;
if(A <= 5) cout << 0 << endl;
else if(A <= 13) cout << B / 2 << endl;
else cout << B << endl;
}
