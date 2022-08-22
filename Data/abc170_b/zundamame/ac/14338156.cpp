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
if(x > 50){
cout << "No" << endl;
return 0;
}
for (int i = 0; i < 100; i++){
for (int j = 0; j < 100; j++){
if(i * 4 + j * 2 == y && i + j == x){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
