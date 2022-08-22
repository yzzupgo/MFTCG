#include <iostream>
using namespace std;
int main(){
int X, Y, i;
cin >> X >> Y;
for (i=0; i<=X; i++){
if (i*2 + (X-i)*4 == Y){
cout << "YES";
return 0;
}
}
cout << "NO";
return 0;
}
