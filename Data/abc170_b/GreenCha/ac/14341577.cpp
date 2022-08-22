#include <bits/stdc++.h>
using namespace std;
int main() {
int h,f,turu,kame;
cin >> h >> f;
if((f%2==0)&&(f>=h*2)){
kame=(f/2)-h;
turu=h-kame;
if(turu>=0){
if ((h == kame + turu) && (f == 2 * turu + 4 * kame))
{
cout << "Yes";
}else{
cout << "No";
}
}else{
cout << "No";
}
}else{
cout << "No";
}
}
