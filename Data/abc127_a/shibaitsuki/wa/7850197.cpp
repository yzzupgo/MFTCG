#include <iostream>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if(a >= 13){
cout << b;
}else if(b >= 6 && 12 >= b){
cout << b/2;
}else{
cout << 0;
}
}
