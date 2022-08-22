#include <iostream>
using namespace std;
int main(void) {
int num;
cin >> num;
if(int(num * 1.08) < 206) {
cout << "Yay!";
} else if(int(num * 1.08) > 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
