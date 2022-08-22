#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int Nans = N * 1.08;
if(Nans < 206) {
cout << "Yay!" << endl;
} else if(Nans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
