#include <iostream>
using namespace std;
int main()
{
int testinput;
cin >> testinput;
int firstNum = 0;
if (testinput >= 10) {
firstNum += 9;
}
else if (testinput <= 10) {
firstNum += testinput;
std::cout << firstNum;
return 0;
}
if (testinput >= 1000) {
firstNum += 900;
}
else if (firstNum <= 1000) {
firstNum += testinput - 99;
std::cout << firstNum;
return 0;
}
if (firstNum <= 100000) {
firstNum += testinput - 10000;
std::cout << firstNum;
return 0;
}
}
