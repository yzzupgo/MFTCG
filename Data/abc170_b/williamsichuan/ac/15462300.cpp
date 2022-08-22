#include <iostream>
using namespace std;
int main(){
int X, Y, i;
cin >> X >> Y;
for (i=0; i<=X; i++){
if (i * 2 + (X - i) * 4 == Y){
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
