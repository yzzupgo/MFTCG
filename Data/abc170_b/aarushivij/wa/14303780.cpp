#include <iostream>
using namespace std;
int main()
{
int animals;
int legs;
cin >> animals;
cin >> legs;
if (legs >= 2 * animals && legs <= 4 * animals)
{
if (legs % 2 == 0)
{
cout << "YES";
return 0;
}
else
{
cout << "NO";
return 0;
}
}
else
{
cout << "NO";
}
}
