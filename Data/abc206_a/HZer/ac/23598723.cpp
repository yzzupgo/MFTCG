#include<iostream>
using namespace std;
using ll = long long;
int main() {
ll a;
cin >> a;
a = 1.08 * a;
if(a < 206) {
cout << "Yay!";
} else if(a == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
