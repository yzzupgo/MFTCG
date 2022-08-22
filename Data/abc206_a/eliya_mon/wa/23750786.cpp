#include <bits/stdc++.h>
using namespace std;
int main() {
double a;
cin >> a;
if(int(a * 1.08) > 206) {
cout << "Yay!";
} else if(int(a * 1.08) == 206) {
cout << "so-so";
} else if(int(a * 1.08) < 206) {
cout << ":(";
}
}
