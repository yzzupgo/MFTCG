#include<iostream>
using namespace std;
int main(){
int x, contador;
double y;
cin >> x;
cin >> y;
if(y/2 == x || y/4 == x){
cout << "Yes" << endl;
} else {
for (contador = 0; y > 0; contador++){
if(y > 4){
y = y - 4;
} else {
y = y - 2;
}
}
if(x == contador ){
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
}
