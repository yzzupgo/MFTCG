#include <iostream>
using namespace std;
int main(void) {
double n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yay!";
return 0;
}
if(n * 1.08 == 206) {
cout << "so-so";
return 0;
} else {
cout << ":(";
return 0;
}
}
