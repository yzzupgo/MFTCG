#include <iostream>
using namespace std;
int main(void) {
int n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
