#include <bits/stdc++.h>
using namespace std;
int main(){
int input = 0;
double animalSum, feetSum, turtle, crane = 0.0;
cin >> animalSum >> feetSum;
turtle = (feetSum - 2 * animalSum) / 2;
crane = animalSum - turtle;
if(crane >= 0 && turtle >=0 && feetSum == 2 * crane + 4 * turtle){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
