#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
double N;
cin >> N;
if(N * 1.08 < 206) {
cout << "Yay!";
} else if(N * 1.08 == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
