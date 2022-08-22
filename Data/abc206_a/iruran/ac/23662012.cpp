#include <bits/stdc++.h>
using namespace std;
int main() {
int a;
cin >> a;
if((int)(a * 1.08) < 206) {
cout << "Yay!" << endl;
} else if((int)(a * 1.08) > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
return 0;
}
