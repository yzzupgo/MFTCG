#include<iostream>
using namespace std;
int main(){
int a, b;
cin >> a >> b;
if (b/2 == 0){
if (a > 12){
cout << b << endl;
}
else if (5 < a && a < 12){
cout << b/2 << endl;
}
else if (0 <= a && a <= 5){
cout << 0 << endl;
}
}
return 0;
}
