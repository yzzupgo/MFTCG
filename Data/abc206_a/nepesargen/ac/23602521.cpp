#include <iostream>
using namespace std;
int main() {
int n = 0;
cin >> n;
int res = n * 1.08;
if(res < 206.0) {
cout << "Yay!" << endl;
} else if(res == 206.0) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
