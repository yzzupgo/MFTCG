#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
double N;
cin >> N;
N *= 1.08;
int M = floor(N);
if(M < 206) {
cout << "Yay!" << endl;
} else if(M == 206) {
cout << "so-so" << endl;
} else if(M > 206) {
cout << ":(" << endl;
}
}
