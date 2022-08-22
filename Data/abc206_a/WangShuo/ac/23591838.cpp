#include <bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
int m = floor(1.08 * n);
#ifdef DEBUG
cout << m << endl;
#endif
if(m < 206) {
cout << "Yay!" << endl;
} else if(m == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
