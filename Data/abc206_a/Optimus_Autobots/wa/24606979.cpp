#include <bits/stdc++.h>
using namespace std;
int main() {
double N;
cin >> N;
double k;
k = (1.08 * N);
if(floor(k) < 206) {
cout << "Yay!";
} else if(k == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
