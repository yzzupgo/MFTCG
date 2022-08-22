#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
int main(){
int a, b, max;
cin >> a >> b;
max = a + b;
if (max < a - b){
max = a - b;
}
if (max < (a * b)){
max = (a * b);
}
cout << max << endl;
return 0;
}
