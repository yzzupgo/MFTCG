#include <iostream>
#include <cmath>
using namespace std;
int main() {
double n;
cin >> n;
if(ceil(n * 1.08) < 206) {
cout << "Yay!" << endl;
} else if(ceil(n * 1.08) > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
return 0;
}
