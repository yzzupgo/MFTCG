#include <iostream>
#include <string>
using namespace std;
int main()
{
unsigned int testinput;
cin >> testinput;
unsigned int ans = to_string(testinput).length();
if (ans == 6) {
std::cout << "90909";
return 0;
}
if (ans == 5) {
std::cout << 898 + testinput - 10000;
return 0;
}
if (ans == 4) {
std::cout << 909;
return 0;
}
if (ans == 3) {
std::cout << (testinput - 99 + 9);
return 0;
}
if (ans == 2) {
std::cout << "9";
return 0;
}
if (ans == 1) {
std::cout << testinput;
return 0;
}
}
