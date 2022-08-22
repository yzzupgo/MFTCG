#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
int a;
cin >> a;
if(a * 1.08 > 206 && a != 191) {
printf(":(");
} else if(a == 191) {
printf("so-so");
} else {
printf("Yay!");
}
return 0;
}
