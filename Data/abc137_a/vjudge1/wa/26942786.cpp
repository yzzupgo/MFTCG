#include <iostream>
using namespace std;
int main()
{
int a, b, sum = 0, sub = 0, mult = 0;
cin >> a >> b;
sum = a + b;
sub = a - b;
mult = a * b;
if (mult > sum and mult > sub)
{
cout << "The largest number among A + B = " << sum << ", " << " A - B = " << sub << ", " << "A x B = " << mult << " is " << mult << endl;
}
if (sum > mult and sum > sub)
{
cout << "The largest number among A + B = " << sum << ", " << " A - B = " << sub << ", " << "A x B = " << mult << " is " << sum << endl;
}
if (sub > sum and sub > mult)
{
cout << "The largest number among A + B = " << sum << ", " << " A - B = " << sub << ", " << "A x B = " << mult << " is " << sub << endl;
}
return 0;
}
