#include <iostream>
void funcB() {
int x, y, leg;
std::cin >> x >> y;
leg = x * 2;
for (int i = 0; i < x; i++) {
if (leg == y) {
std::cout << "Yes";
return;
}
else if (leg > y) {
break;
}
leg += 2;
}
std::cout << "No";
}
int main(void) {
funcB();
return 0;
}
