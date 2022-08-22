#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
float a = n * 1.08;
if(a == 206) {
cout << "so-so";
} else if(a > 206) {
cout << ":(";
} else {
cout << "Yay!";
}
return 0;
}
