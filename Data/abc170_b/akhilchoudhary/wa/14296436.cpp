#include<bits/stdc++.h>
using namespace std;
void test_case(){
}
int main(){
int X,Y;
cin >> X >> Y;
for(int c=1; c<=X;c++){
if(2*c + 4*(X-c)==Y){
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
return 0;
}
