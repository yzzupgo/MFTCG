#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int x = (n * 108 - 20600) / 100;
cout << (x < 0 ? "Yay!" : x == 0 ? "so-so" : ":(") << endl;
}
