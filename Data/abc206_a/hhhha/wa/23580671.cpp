#include <bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
double tp = n * ((double)1.08);
int t = tp;
if(t < 206) {
cout << "yay" << endl;
} else if(t == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
