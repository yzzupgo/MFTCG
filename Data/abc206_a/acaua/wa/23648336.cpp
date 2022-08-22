#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int v = n * 1.08;
cout << (v < 206 ? "Yah!" : v == 206 ? "so-so" : ":(") << endl;
return 0;
}
