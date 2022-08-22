#include <bits/stdc++.h>
using namespace std;
int main() {
long long n, sum;
cin >> n;
sum = 1.08 * n;
if(sum < 206) {
cout << "Yay!" << endl;
} else if(sum == 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
return 0;
}
