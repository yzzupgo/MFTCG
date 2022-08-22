#include<bits/stdc++.h>
using namespace std;
int main() {
int x;
cin >> x;
float a;
a = 1.08 * x;
if(a < 206) {
cout << "Yay!";
} else if(a > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
