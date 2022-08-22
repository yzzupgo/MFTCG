#include <iostream>
using namespace std;
int input1;
int input2;
int main() {
cin >> input1 >> input2;
int plus = input1 + input2;
int minus = input1 - input2;
int times = input1 * input2;
if (plus>minus && plus>times){
cout << plus;
}
else if (minus>plus && minus>times){
cout << minus;
}
else{
cout << times;
}
return 0;
}
