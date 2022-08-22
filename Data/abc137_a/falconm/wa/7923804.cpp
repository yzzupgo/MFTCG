#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,sum,difference,multiple;
cin >> a >> b;
sum = a+b;
difference = a-b;
multiple = a*b;
if ( sum > difference and sum > multiple){
cout << sum << endl;
}
else if (difference > sum and difference > multiple){
cout << difference << endl;
}
else if (multiple > sum and multiple > difference){
cout << multiple << endl;
}
}
