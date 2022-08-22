#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin >> n;
long long p = round((n * 1.08));
if(p < 206) {
cout << "Yay!" << endl;
} else if(p == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
