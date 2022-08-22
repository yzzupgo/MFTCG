#include<iostream>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
int c = b / 2;
if(a <= 5){
cout << "0";
}else if(a >= 6 && a <= 12 ){
cout << c ;
}else if(a > 13){
cout << b;
}
}
