#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B;
cin >> A >> B;
if(2 * A <= B && 2 * A >= B && B % 2 == 0){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
