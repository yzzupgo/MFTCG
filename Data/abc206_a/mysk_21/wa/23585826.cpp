#include <bits/stdc++.h>
using namespace std;
int main() {
int N, price;
cin >> N ;
price = 1.08 * N;
if(price > 206) {
cout << ":(" << endl;
} else if(price = 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
