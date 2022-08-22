#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
if(n * 108 / 100 < 206) {
cout << "Yay!" << endl;
} else if(n * 108 / 100 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
