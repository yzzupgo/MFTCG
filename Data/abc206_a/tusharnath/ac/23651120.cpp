#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
N = (N * 108) / 100;
if(N < 206) {
cout << "Yay!\n";
} else if(N == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
