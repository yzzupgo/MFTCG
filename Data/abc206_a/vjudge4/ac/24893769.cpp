#include <iostream>
using namespace std;
int main() {
int N, result, x = 206;
cin >> N;
result = 1.08 * N;
if(result < x) {
cout << "Yay!";
} else if(result == x) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
