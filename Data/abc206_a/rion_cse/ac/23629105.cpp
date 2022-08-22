#include <bits/stdc++.h>
using namespace std;
int main() {
long long n, sum;
cin >> n;
sum = 1.08 * n;
if(sum < 206) {
cout << "Yay!" << endl;
} else if(sum == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
