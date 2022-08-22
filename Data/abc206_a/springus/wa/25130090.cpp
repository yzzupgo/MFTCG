#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
int n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yah!" << endl;
} else if(int(n * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
