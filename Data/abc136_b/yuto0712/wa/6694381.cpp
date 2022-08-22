#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int log=0;
int m = n;
while (m>=10){
m /=10;
log++;
}
if(log==0){
cout << n << endl;
}
else if(log == 1){
cout << 9 << endl;
}
else if(log == 2){
cout << n-90 << endl;
}
else if(log == 3){
cout << 909 << endl;
}
else if(log == 4){
cout << n-9010 << endl;
}
else cout << 90909 << endl;
}
