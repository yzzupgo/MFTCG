#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int mass,k,a,b,c;
    cin>>a;
    b = a%10;
    if(b==0){
    b=10;
    mass = a-a%10;
    }
    else
    mass  = a-a%10+10;
    for(int i=0;i<4;i++){
        cin>>a;
        if(a%10==0){
        mass=mass+a;
        continue;
        }
        else if(a%10<b)
        b = a%10;
        mass = mass + a - a%10+10;
    }
    if(b!=10)
        mass  = mass-10+b;
    cout<<mass<<endl;
    
}
