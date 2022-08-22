#include <bits/stdc++.h>
using namespace std;
int main(){
int input = 0;
double animalSum, feetSum, turtle, crane = 0.0;
cin >> animalSum >> feetSum;
turtle = (feetSum - 2 * animalSum) / 2;
crane = animalSum - turtle;
if(crane >= 0 && std::floor(crane) == crane &&
turtle >=0 && std::floor(turtle) == turtle){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
