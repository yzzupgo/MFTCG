#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
double p = 1.08 * (double)N;
int z = floor(p);
if(z < 206) {
cout << "Yayy!" << "\n";
} else if(z == 206) {
cout << "so-so" << "\n";
} else {
cout << ":(" << "\n";
}
return 0;
}
