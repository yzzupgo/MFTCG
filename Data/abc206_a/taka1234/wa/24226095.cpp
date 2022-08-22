#include <iostream>
using namespace std;
int main() {
double N, num;
cin >> N;
num = 1.08 * N;
int ans;
ans = num;
if(num > 206) {
cout << ":(";
} else if(num == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
