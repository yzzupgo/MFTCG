#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if(y%2!=0){
cout << "No" << endl;
} else if(y/2>x*4){
cout << "No" << endl;
} else{
cout << "Yes" << endl;
}
return 0;
}
