#include <iostream>
using namespace std;
int main(void) {
int num;
cin >> num;
if(num * 1.08 > 206) {
cout << "Yay!";
} else if(num * 1.08 < 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
