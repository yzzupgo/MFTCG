#include <iostream>
void funcB() {
int x, y, leg;
std::cin >> x >> y;
leg = x * 2;
if (leg == y) {
std::cout << "Yes";
return;
}
for (int i = 0; i < x; i++) {
leg += 2;
if (leg == y) {
std::cout << "Yes";
return;
}
if (leg > y) {
break;
}
}
std::cout << "No";
}
int main(void) {
funcB();
return 0;
}
