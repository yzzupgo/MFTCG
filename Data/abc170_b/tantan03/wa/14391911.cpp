#include <iostream>
int main()
{
long X, Y;
std::cin >> X >> Y;
for (long i = 1; i <= X; i++) {
if (Y == 2 * i + 4 * (X - i)) {
std::cout << "YES";
return 0;
}
}
std::cout << "NO";
}
