#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if (N<100) {
cout << 9 <<endl;
}else if(N < 1000) {
cout << 9 + (N-99) << endl;
}else if(N < 100000) {
cout << 9+99+(N-9999) << endl;
}else if(N=100000) {
cout << 90909 << endl;
}
}
