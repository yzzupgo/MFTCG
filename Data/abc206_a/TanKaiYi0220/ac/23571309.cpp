#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
if(int(N * 1.08) == 206) {
cout << "so-so";
} else if(int(N * 1.08) < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}
