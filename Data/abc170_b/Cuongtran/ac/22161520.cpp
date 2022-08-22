#include <iostream>
using namespace std;
int main(){
int X,Y;
bool found = false;
cin >> X >> Y;
for (int i=0; i<=X; ++i){
int nbLegs = i*4 + (X-i)*2;
if(nbLegs == Y){
found = true;
break;
}
}
if(found){
cout << "Yes";
} else {
cout << "No";
}
}
