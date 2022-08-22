#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
int a;
cin >> a;
if(a * 1.08 >= 206) {
printf(":(");
} else {
printf("Yay!");
}
return 0;
}
