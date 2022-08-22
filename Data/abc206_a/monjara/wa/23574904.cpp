#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(206 > n * 1.08) {
cout << "Yay!" << endl;
} else if(206 == n * 1.08) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
