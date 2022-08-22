#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int M = N * 1.08;
if(M < 206) {
cout << "Yay!";
}
if(M == 206) {
cout << "so-so";
}
if(M > 206) {
cout << ":(";
}
}
