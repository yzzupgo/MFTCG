#include <bits/stdc++.h>
using namespace std;
int main(){
int age , charge , hisCharge;
cin >> age >> charge;
if(age >= 13){
hisCharge = charge;
} else if(age <= 12 || age >= 6){
hisCharge = charge / 2;
} else if(age <= 5){
hisCharge = 0;
}
cout << hisCharge << endl;
}
