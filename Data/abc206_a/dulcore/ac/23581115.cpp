#include <iostream>
#include <math.h>
using namespace std;
int main() {
double n;
cin >> n;
if(round(n * 1.08) == 206) {
cout << "so-so";
} else if(round(n * 1.08) < 206) {
cout << "Yay!";
} else if(round(n * 1.08) > 206) {
cout << ":(";
}
cout << endl;
}
