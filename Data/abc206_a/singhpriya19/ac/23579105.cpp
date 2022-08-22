#include <bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
double a = 1.08;
n = n * a;
long long int aa = floor(n);
if(aa < 206) {
cout << "Yay!";
} else if(aa == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
