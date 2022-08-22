#include <iostream>
using namespace std;
int main() {
double x, y;
cin >> x >> y;
double z=(((4*x)-y)/2);
if(z >= 0){
if(z == int(z)){
cout << "Yes";
}
else{
cout << "No";
}
}
else{
cout << "No";
}
}
