#include <iostream>
using namespace std;
int a;
int b;
int main() {
cin >> a >> b;
if(a*b > a+b){
cout << a*b << endl;
}
else if (a-b > a+b){
cout << a+b << endl;
}
else{
cout << a+b << endl;
}
}
