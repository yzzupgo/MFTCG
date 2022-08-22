#include <bits/stdc++.h>
using namespace std;
int main(){
int S, L;
cin >> S >> L;
int ANS = 0;
int B = 0;
for(int i = 1;i <= S;i++){
B = L + i - 1;
ANS = ANS + L + i - 1;
}
if(B < 0){
cout << ANS - B << endl;
}else if(L < 0){
cout << ANS << endl;
}else{
cout << ANS - L << endl;
}
}
