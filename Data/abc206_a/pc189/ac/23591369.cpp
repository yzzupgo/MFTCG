#include <iostream>
using namespace std;
#include<cmath>
int main() {
int n;
cin >> n;
float a = floor(n * 1.08);
if(a == 206) {
cout << "so-so";
} else if(a > 206) {
cout << ":(";
} else {
cout << "Yay!";
}
return 0;
}
