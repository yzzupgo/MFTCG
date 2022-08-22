#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <fstream>
using namespace std;
int main(){
int X, Y;
int max, min;
cin >> X >> Y;
max = X * 4;
min = X * 2;
if(Y < min || Y > max){
cout << "No" << endl;
}
else{
if(Y % 2 != 0){
cout << "No" << endl;
}
else{
cout << "Yes" << endl;
}
}
return 0;
}
