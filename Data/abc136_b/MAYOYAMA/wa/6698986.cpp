#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if (N<100) {
cout << 9 <<endl;
}else if(N < 1000) {
cout << 9 + (N-99) << endl;
}else if(N < 10000) {
cout << 9+900 << endl;
}else if(N < 100000) {
cout << 9+900+(N-9999) << endl;
}else if(N<1000000) {
cout << 9+900+90000 << endl;
}
}
