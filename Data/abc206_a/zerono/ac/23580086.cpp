#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
double n;
cin >> n;
if(floor(n * 1.08) < 206) {
cout << "Yay!" << endl;
} else if(floor(n * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
