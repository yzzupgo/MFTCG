#include <cmath>
#include <iostream>
#include <functional>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main(){
int A,B;
cin >> A >> B;
if(A > 12){
cout << A << endl;
}
else if(6 <= A && A <= 12){
cout << A/2 << endl;
}
else{
cout << "0" << endl;
}
}
