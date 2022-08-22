#include <iostream>
#include <vector>
int main()
{
int X;
int Y;
std::string answer = "No";
std::cin >> X >> Y;
if (X * 2 == Y)
{
answer = "Yes";
}
else if (X * 4 == Y)
{
answer = "Yes";
}
else
{
for (int turu = 1; turu < X; turu++)
{
for (int kame = 1; kame < X - turu; kame++)
{
if (turu * 2 + kame * 4 == Y)
{
answer = "Yes";
}
}
}
}
std::cout << answer;
return 0;
}
