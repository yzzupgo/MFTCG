#include <iostream>
using namespace std;
int main(void){
int x, y;
cin >> x >> y;
bool result = false;
for(int i = 0; i <= x && !result; i++){
result = (y == 2*(x + i));
}
if (result)
{
cout << "Yes" << endl;
}
else cout << "No" << endl;
return 0;
}
