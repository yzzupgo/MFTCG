#include <bits/stdc++.h>
using namespace std;
int main(){
double animalSum, feetSum, turtle = 0.0;
cin >> animalSum >> feetSum;
turtle = (feetSum - 2 * animalSum) / 2;
if(std::floor(turtle) == turtle && turtle <= animalSum ){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
