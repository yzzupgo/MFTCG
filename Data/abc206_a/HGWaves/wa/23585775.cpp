#include <iostream>
#include <array>
#include <vector>
#include <string>
using namespace std;
int main() {
long int N;
cin >> N;
long int result = 1.08 * N - 206;
if(result < -1) {
cout << "Yay!";
} else if(result > 0) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
