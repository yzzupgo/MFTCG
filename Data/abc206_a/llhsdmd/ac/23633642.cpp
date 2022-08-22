#include<iostream>
#include<cmath>
using namespace std;
int main() {
float x;
cin >> x;
if(floor(x * 1.08) < 206) {
printf("Yay!\n");
} else if(floor(x * 1.08) == 206) {
printf("so-so\n");
} else {
printf(":(\n");
}
return 0;
}
