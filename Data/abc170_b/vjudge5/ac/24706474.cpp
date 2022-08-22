#include <iostream>
using namespace std;
int main()
{
int animals_quantity, legs;
int max_legs, min_legs;
string reply = "No";
cin >> animals_quantity;
cin >> legs;
min_legs = 2*animals_quantity;
max_legs = 4*animals_quantity;
if(animals_quantity > 0 && legs > 0){
if(!(legs%2)){
if(legs >= min_legs && legs <= max_legs)
reply = "Yes";
}
}
cout << reply;
return 0;
}
