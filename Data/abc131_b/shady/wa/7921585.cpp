#include <bits/stdc++.h>
using namespace std;
int main () {
int N,L;
cin >> N >> L;
int A;
A = L;
for ( int i = 1; i < N; i++ ) {
A += ( L + i );
}
if ( L <= 0 && N + L >= 0 ) {
cout << A << endl;
}
else if ( L >= 0 && N + L <= 0 ) {
cout << A << endl;
}
else if ( L < 0 && N + L < 0 ) {
cout << A - ( L + N - 1 ) << endl;
}
else if ( L > 0 && N + L > 0 ) {
cout << A - L << endl;
}
}
