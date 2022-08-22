#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int x[5];
    for(int i=0;i<5;i++) cin >> x[i];

    int a = 10;
    for(int i=0;i<5;i++){
        if(x[i]%10 == 0) continue;
        a = min(a, x[i]%10);
    }
    if(a == 10) a = 0;

    int sum = 0;
    for(int i=0;i<5;i++){
        sum += (x[i]+9)/10;
    }

    sum = sum*10 - 10 + a;

    cout << sum << endl;
}