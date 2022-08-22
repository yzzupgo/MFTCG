#include <iostream>
using namespace std;
int main(void){
int a,b;
cin >> a >> b;
int sum,sa,kakeru,max;
sum = a+b;
sa = a-b;
kakeru = a*b;
max = sum;
if(sa > max)max = sum;
if(kakeru > max)max = kakeru;
cout << max;
}
