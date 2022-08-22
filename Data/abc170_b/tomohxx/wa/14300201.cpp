#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if(y-2*x > 0 && (y-2*x)%2 == 0 && 3*x-y > 0 && (3*x-y)%2 == 0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
