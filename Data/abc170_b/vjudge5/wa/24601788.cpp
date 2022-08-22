#include <iostream>
using namespace std;
int main()
{
int x, y, aux;
string res = "No";
cin >> x >> y;
int cantidadMaximaPatas = 2*x;
if(cantidadMaximaPatas == y){
res = "Yes";
}else {
aux = (y > cantidadMaximaPatas)? y - cantidadMaximaPatas : -1;
}
if(aux%2 == 0 && cantidadMaximaPatas > aux)
res = "Yes";
cout << res;
return 0;
}
