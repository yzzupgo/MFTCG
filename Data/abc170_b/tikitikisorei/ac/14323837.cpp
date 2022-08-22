#include<iostream>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
if(X * 4 >= Y && Y % 2 == 0 && X * 2 <= Y){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
