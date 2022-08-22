#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main(void) {
double N;
cin >> N;
N = 1.08 * N * 100;
if(N < 20600) {
cout << "Yay!";
} else if(N == 20600) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
