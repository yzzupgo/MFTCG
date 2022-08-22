#include <iostream>
using namespace std;
int main() {
double n;
cin >> n;
if(n * 1.08 == 206) {
cout << "so-so";
} else if(n * 1.08 < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
cout << endl;
}
