#include <bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
