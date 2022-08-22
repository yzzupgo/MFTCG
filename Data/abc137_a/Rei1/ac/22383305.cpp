#include <iostream>
using namespace std;
int main(void){
int a, b;
int max = 0;
cin >> a >> b;
max = a + b;
if(max < a - b){
max = a - b;
}
if(max < a * b){
max = a * b;
}
cout << max << endl;
return 0;
}
