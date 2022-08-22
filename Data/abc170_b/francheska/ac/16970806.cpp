#include <iostream>
using namespace std;
int x, y;
int main(){
cin >> x >> y;
for(int i= 0; i <= x; i++){
int tmp = x - i;
if(2 * i + 4 * tmp == y)
return cout << "Yes" << endl, 0;
}
cout << "No" << endl;
}
