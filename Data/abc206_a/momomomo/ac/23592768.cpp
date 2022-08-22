#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main(void) {
double N;
cin >> N;
N = 1.08 * N;
if(N < 206) {
cout << "Yay!";
} else if(206 <= N & N < 207) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
