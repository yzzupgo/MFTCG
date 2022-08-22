#include <bits/stdc++.h>
using namespace std;
int main() {
double n;
int k;
cin >> n;
n = 1.08 * n;
k = n;
if(k < 206) {
cout << "Yay!" << endl;
} else if(k = 206) {
cout << "so-so" << endl;
} else if(k > 206) {
cout << ":(" << endl;
}
return 0;
}
