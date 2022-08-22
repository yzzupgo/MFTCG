#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main() {
int a, b, fare;
cin >> a >> b;
if (a >= 13) {
fare = b;
}
else if (a >= 6){
fare = b / 2;
}
else {
fare = 0;
}
cout << fare << endl;
}
