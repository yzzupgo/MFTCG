#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
int main()
{
int64_t X, Y;
std::cin >> X >> Y;
for (size_t i = 0; i <= X; ++i)
{
if (i * 2 + (X - i) * 4 == Y) {
std::cout << "Yes" << std::endl;
return 0;
}
}
std::cout << "No" << std::endl;
return 0;
}
