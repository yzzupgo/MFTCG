#include <bits/stdc++.h>
using namespace std;
int main(){
int N,A;
cin >> N >> A;
int L,R;
L = A;
R = A + N - 1;
int ans = 0;
if (L > 0) ans = L;
else if(R < 0) ans = R;
else ans = 0;
cout << ((L+R)*N)/2 - ans << endl;
}
