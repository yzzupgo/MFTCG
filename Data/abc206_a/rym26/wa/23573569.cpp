#include <bits/stdc++.h>
using namespace std;
int main() {
double N;
cin >> N;
int k;
k = N * 1.08;
if(k > 206) {
cout << "Yay!" << endl;
} else if(k <= 205) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
