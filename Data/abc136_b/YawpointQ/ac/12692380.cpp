#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int i=1;
int x=n;
int k;
while(x>=10){
x/=10;
i++;
}
if(i==1){
k=n;
}
else if(i==2){
k=9;
}
else if(i==3){
k=n-90;
}
else if(i==4){
k=909;
}
else if(i==5){
k=n-9090;
}
else{
k=90909;
}
cout << k << endl;
}
