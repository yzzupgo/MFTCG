#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!";
}
if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
