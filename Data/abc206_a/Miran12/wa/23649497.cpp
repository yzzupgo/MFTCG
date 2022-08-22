#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
n = 1.08 * n;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
