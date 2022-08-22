#include <iostream>
#include <string>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
int c = X, t = 0;
string answer = "No";
for (int i = 0; i < X; i++, c--, t++) {
if (2 * c + 4 * t == Y)
answer = "Yes";
}
cout << answer << endl;
return 0;
}
