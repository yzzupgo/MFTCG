#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for(int i=0; i<x; i++){
int a = y-(6*i);
if(a > 0){
if(a%2==0 || a%4==0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
else if(a == 0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
}
