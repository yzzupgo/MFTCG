#include<iostream>
#include <math.h>
using namespace std;
int main() {
int N;
cin >> N;
double res = floor(1.08 * N);
if(res < 206) {
cout << "Yay!";
} else if(res == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
