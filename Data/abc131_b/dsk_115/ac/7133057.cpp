#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int A,B;
A = L;
B = L + N -1;
int ans;
if (B<0) ans = B;
else if(A>0) ans = A;
else ans = 0;
cout << N*(A+B)/2 - ans << endl;
}
