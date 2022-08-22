#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
if(N * 108 < 20600) {
printf("Yay!\n");
} else if(N * 108 == 20600) {
printf("so-so\n");
} else {
printf(":(\n");
}
return 0;
}
