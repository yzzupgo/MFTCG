#include <iostream>
#include <string>
using namespace std;
int main() {
int N;
cin >> N;
double res = 1.08 * N;
if(res <= 206) {
printf("Yay!");
} else if(res == 206) {
printf("so-so");
} else {
printf(":(");
}
}
