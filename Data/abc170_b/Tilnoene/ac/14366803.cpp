#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if(y%2!=0){
cout << "No" << endl;
} else if(y/2>x*4){
cout << "No" << endl;
} else{
int a=x, b=0;
bool val = false;
while(a>=0){
if(a*2+b*4==y){
val = true;
break;
}
a--;
b++;
}
if(val){
cout << "Yes" << endl;
} else{
cout << "No" << endl;
}
}
return 0;
}
