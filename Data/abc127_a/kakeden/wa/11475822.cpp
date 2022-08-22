#include <iostream>
using namespace std;
int main(void){
int a,b;
cin >> a >> b;
if(0<=a&&a<=5){
cout << 0 << endl;
}
else if(6<=a&&a<=12){
cout << a/2 << endl;
}
else{
cout << a << endl;
}
}
