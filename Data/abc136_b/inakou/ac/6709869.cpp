#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if ( N < 10 ) {
cout << N << endl;
}
if ( 100 > N) {
if ( N >= 10 )
cout << 9 << endl;
}
if ( 1000 > N ) {
if ( N >= 100 )
cout << N - 99 + 9 << endl;
}
if ( N < 10000 ) {
if ( N >= 1000 )
cout << 900 + 9 << endl;
}
if ( N >= 10000 ) {
if ( N < 100000 )
cout << N - 9999 + 909 << endl;
}
if ( N >= 100000) {
if ( N < 1000000 )
cout << 90909 << endl;
}
}
