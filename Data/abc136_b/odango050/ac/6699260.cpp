#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main(){
int N ;
int sum,log;
cin >> N ;
log = log10(N);
switch(log){
case 0 :
sum = N;
break;
case 1 :
sum = 9;
break;
case 2 :
sum = 9 + (N-99);
break;
case 3 :
sum = 909;
break;
case 4 :
sum = 9 + 900 + (N-9999);
break;
case 5 :
sum = 90909;
break;
default :
break;
}
cout << sum << endl;
return 0;
}
