#include <bits/stdc++.h>
using namespace std;
int main() {
int n, a;
cin >> n;
a = n * 1.08;
if(a < 206) {
cout << "Yay!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
