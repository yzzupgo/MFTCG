#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
n = n * 108;
if(n < 20600) {
cout << "Yay!" << endl;
} else if(n == 20600) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
