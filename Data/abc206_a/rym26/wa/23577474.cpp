#include <bits/stdc++.h>
using namespace std;
int main() {
double N;
cin >> N;
int k;
k = N * 1.08;
cout << k << endl;
if(k < 206) {
cout << "Yay!" << endl;
} else if(k > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
