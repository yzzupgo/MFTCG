#include <iostream>
int main()
{
long X, Y;
std::cin >> X >> Y;
for (long i = 0; i <= X; i++) {
if (Y == 2 * i + 4 * (X - i)) {
std::cout << "Yes";
return 0;
}
}
std::cout << "No";
}
