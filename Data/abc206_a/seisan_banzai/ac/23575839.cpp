#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(int(n * 1.08) < 206) {
cout << "Yay!" << endl;
} else if(int(n * 1.08) > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
return 0;
}
