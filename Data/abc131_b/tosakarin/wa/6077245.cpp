#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L;
cin >> N >> L;
if(L < 1)
cout << (1/2)*N*N + (L + (1/2))*N << endl;
else
cout << (1/2)*N*N + (L + (1/2))*N -2*L +2 << endl;
}
