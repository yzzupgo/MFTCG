#include<iostream>
using namespace std;
int main() {
int x;
cin >> x;
if(x <= 180) {
printf("Yay!\n");
} else if(x < 194) {
printf("so-so\n");
} else {
printf(":(\n");
}
return 0;
}
