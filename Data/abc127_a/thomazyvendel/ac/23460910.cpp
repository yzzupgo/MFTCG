#include <iostream>
using namespace std;
int main() {
int a,b;
cin >> a >> b;
if(a>=13){
cout << b << endl;;
}else if((a<=12) && (a>=6)){
cout << b/2 << endl;
}else if(a<=5){
cout << "0" << endl;
}
return 0;
}
