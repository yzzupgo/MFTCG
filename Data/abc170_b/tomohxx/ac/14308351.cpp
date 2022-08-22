#include <iostream>
using namespace std;
int main()
{
int x, y;
int a, b;
cin >> x >> y;
if(y-2*x >= 0 && (y-2*x)%2 == 0 && 4*x-y >= 0 && (4*x-y)%2 == 0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
