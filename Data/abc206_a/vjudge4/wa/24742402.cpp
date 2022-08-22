#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
int x = (1.08 * n);
if(x > 206) {
cout << ":(";
} else if(x = 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
