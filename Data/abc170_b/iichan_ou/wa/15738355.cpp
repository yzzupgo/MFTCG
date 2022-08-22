#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
int X,Y = 0;
cin >> X >> Y;
int a,b = 0;
if (Y % 2 == 1){
cout << "No" << endl;
}
if(Y - 2*X >= 0 && Y - 4*X <= 0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
