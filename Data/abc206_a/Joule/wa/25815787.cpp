#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int val = (int)(n * 1.08);
if(val < 206) {
cout << "Yey!" << endl;
} else if(val == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
