#include<bits/stdc++.h>
using namespace std;
int main() {
long long N;
cin >> N;
double S = (double)N * (1.08);
if((int)S < 206) {
cout << "Yay!";
} else if((int)S == 206) {
cout << "so-so";
} else {
cout << ": (";
}
}
