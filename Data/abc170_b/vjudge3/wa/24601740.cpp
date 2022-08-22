#include <iostream>
using namespace std;
int main()
{
int x, y, aux;
int MINIMIUM_LEGS = 2;
string res = "No";
cin >> x >> y;
int cantidadMinimaPatas = 2*x;
if(cantidadMinimaPatas == y){
res = "Yes";
}
else{
aux = y - cantidadMinimaPatas;
}
if(aux%2 == 0 && cantidadMinimaPatas > aux)
res = "Yes";
cout << res;
return 0;
}
