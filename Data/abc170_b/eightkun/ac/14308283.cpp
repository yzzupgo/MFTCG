#include<iostream>
using namespace std;
int main(){
int X,Y;
bool can = false;
cin >> X >> Y;
for(int a = 0;a <= X;a++){
for(int b = 0;b <= X - a;b++){
if(a + b == X && 2*a + 4*b == Y){
can = true;
}
}
}
if(can){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
