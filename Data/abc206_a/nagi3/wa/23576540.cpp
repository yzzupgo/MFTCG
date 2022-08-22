#include <iostream>
#include <string>
#include <vector>
#define _GLIBCXX_DEBUG
using namespace std;
int main() {
int n;
cin >> n;
int np = 1.08 * n;
if(np > 206) {
cout << "Yay!" << endl;
} else if(np == 206) {
cout << "so-so" << endl;
} else {
cout << ":( " << endl;
}
}
