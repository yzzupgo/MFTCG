#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main() {
int X,Y; cin >> X >> Y;
bool d = false;
for(int i=0;i<=X;i++){
for(int j=0;j<=X;j++){
if(2*i+4*j == Y && i + j == X){
d = true;
}
}
}
if(d == true){
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
