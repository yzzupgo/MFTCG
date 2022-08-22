#include <iostream>
int main()
{
int head_x, foot_y, turtle, crane;
std::cin >> head_x >> foot_y;
turtle = (foot_y / 2) - head_x;
crane = head_x - turtle;
if (head_x == turtle + crane && foot_y == 4 * turtle + 2 * crane)
{
if (turtle >= 0 && crane >= 0)
{
std::cout << "Yes" << std::endl;
}
else
{
std::cout << "No" << std::endl;
}
}
}
