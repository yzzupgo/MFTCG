#include <bits/stdc++.h>
using namespace std;
int main() {
int x;
cin >> x;
if(int(x * 1.08) < 206) {
cout << "Yay" << endl;
} else if(int(x * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
