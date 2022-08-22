#include <bits/stdc++.h>
using namespace std;
int main() {
int N, M;
cin >> N;
M = N * 1.08;
if(M < 206) {
cout << "Yay!";
} else if(M = 206) {
cout << "so-so";
} else if(M > 206) {
cout << ":(";
}
}
