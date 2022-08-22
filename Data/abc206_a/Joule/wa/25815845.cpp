#include <iostream>
using namespace std;
int main() {
double n;
cin >> n;
double tmp = n * 1.08;
int val = (int)tmp;
if(val < 206) {
cout << "Yey!" << endl;
} else if(val == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
