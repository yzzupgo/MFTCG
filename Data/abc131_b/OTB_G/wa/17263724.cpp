#include <bits/stdc++.h>
using namespace std;
int main(){
int S, L;
cin >> S >> L;
int ANS = 0;
int B = 0;
for(int i = 1;i <= S;i++){
ANS = ANS + L + i - 1;
}
if(L < 0){
cout << ANS << endl;
}else{
cout << ANS - L << endl;
}
}
