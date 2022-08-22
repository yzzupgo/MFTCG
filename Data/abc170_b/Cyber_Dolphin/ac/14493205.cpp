#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;
int main(){
int x=0;
int y=0;
cin >> x;
cin >> y;
int t2 = y - 2*x;
int c2 = 4*x - y;
bool numcheck = (t2 >= 0) && (c2 >= 0);
bool modcheck = (t2 % 2) || (c2 % 2);
if(numcheck && !modcheck){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
