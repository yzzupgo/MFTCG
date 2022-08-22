#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if(x == 1 && y == 2){
cout << "Yes" << endl;
return 0;
}
if(x == 1 && y == 4){
cout << "Yes" << endl;
return 0;
}
for (int i = 0; i < x; i++){
for (int j = 0; j < x; j++){
if(i * 2 + j * 4 == y && i + j == x){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
