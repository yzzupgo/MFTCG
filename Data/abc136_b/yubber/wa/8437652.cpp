#include <bits/stdc++.h>
using namespace std;
int n, t;
void addless(int oof){
for (int i=oof+1; i<= n; i++){
if (to_string(i).length()%2==1){
t++;
}
}
}
int main(){
cin >> n;
if (n > 9){
t += 9;
if (n > 999){
t += 900;
if (n > 99999){
t += 90000;
} else {addless(999);}
} else {addless(9);}
} else {addless(1);}
cout << t;
}
