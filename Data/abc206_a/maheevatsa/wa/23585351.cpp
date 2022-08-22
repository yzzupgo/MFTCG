#include<iostream>
using namespace std;
int main() {
int n, x;
cin >> n;
x = 1.08 * n;
if(x < 206) {
cout << "yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
