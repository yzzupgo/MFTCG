#include <iostream>
using namespace std;
int main()
{
int x, y;
int numberCranes = 0;
int numberTurtles = 0;
string res = "No";
cin >> x >> y;
int legsTurtles = x * 4;
int legsCranes = legsTurtles - y;
if (legsCranes > 0) {
if (legsCranes % 2 == 0) {
numberCranes = legsCranes / 2;
numberTurtles = x - numberCranes;
}
} else if (legsCranes == 0 && y % 4 == 0 && y / 4 == x) {
numberTurtles = y / 4;
}
if (numberCranes >= 0 && numberTurtles >= 0 && numberCranes + numberTurtles == x) {
res = "Yes";
}
cout << res << endl;
return 0;
}
