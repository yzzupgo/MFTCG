#include <bits/stdc++.h>
using namespace std;
int main() {
double N;
cin >> N;
if(floor(1.08 * N) < 206) {
cout << "Yay!";
} else if(floor(1.08 * N) == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
