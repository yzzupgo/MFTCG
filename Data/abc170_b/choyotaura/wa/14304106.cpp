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
cout << "NO" << endl;
}
else{
if(Y % 2 != 0){
cout << "NO" << endl;
}
else{
cout << "YES" << endl;
}
}
return 0;
}
