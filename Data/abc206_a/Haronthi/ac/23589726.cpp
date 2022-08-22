#include <iostream>
using namespace std;
int main() {
int N;
int a;
cin >> N;
a = N * 1.08;
if(a < 206) {
cout << "Yay!";
} else if(a == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
