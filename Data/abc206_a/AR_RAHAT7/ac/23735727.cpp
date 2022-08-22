#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
N *= 1.00;
double m = (1.08 * N);
int M = m;
if(M < 206) {
cout << "Yay!" << '\n';
} else if(M == 206) {
cout << "so-so" << '\n';
} else {
cout << ":(" << '\n';
}
return 0;
}
