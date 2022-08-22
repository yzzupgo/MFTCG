#include <iostream>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
for(int x = 0; x <= X; x++) {
if((2*x + 4*(X-x)) == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
