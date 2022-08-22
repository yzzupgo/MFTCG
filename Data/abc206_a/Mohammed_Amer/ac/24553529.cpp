#include <bits/stdc++.h>
using namespace std;
int main() {
unsigned short int n, t;
cin >> n;
t = n * 1.08;
if(t == 206) {
cout << "so-so";
} else if(t < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
return 0;
}
