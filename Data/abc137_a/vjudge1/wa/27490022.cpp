#include <iostream>
using namespace std;
int main()
{
int A, B,l;
cin >> A >>B;
if ((A + B) > (A - B) && (A + B) > (A * B))
cout << A + B;
if ((A - B) > (A + B) && (A - B) > (A * B))
cout << A - B;
if ((A * B) > (A - B) && (A * B) > (A + B))
cout << A * B;
}
