#include <bits/stdc++.h>
using namespace std;
int main()
{
bool can = false;
int animals, legs;
cin >> animals >> legs;
if (animals == 1){
if(legs == 1 || legs == 2){
can = true;
}
}else{
for(int i = 0; i < animals; i++){
int sum = 0, turtles = 0;
turtles = animals - i;
sum = (2 * i) + (4 * turtles);
if(sum == legs){
can = true;
break;
}
}
}
if (can == true) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
