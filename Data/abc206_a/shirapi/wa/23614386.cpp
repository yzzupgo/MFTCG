#include <iostream>
using namespace std;
int main() {
int p;
cin >> p;
if(p * 1.08 < 206) {
cout << "Yay!";
} else if(p * 1.08 > 206) {
cout << ":(";
} else if(p * 1.08 == 206) {
cout << "so-so";
}
return 0;
}
