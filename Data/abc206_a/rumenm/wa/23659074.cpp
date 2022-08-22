# include <bits/stdc++.h>
using namespace std;
int main() {
long long N;
cin >> N;
N = (double)N * 1.08;
if(N < 206) {
cout << "yay!" << endl;
}
if(N == 206) {
cout << "so-so" << endl;
}
if(N > 206) {
cout << ":(" << endl;
}
}
