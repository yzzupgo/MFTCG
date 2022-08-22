#include<iostream>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
if(X * 4 >= Y && Y % 2 == 0){
cout << "Yes";
}else{
cout << "No";
}
return 0;
}
