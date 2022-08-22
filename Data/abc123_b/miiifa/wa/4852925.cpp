#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iosfwd>
#include<sstream>
using namespace std;

int main(){
    int min=9;
    int sum= 0;
    vector<int> dish(5);
    for(int i=0; i<5; i++){
        cin >> dish[i];
        sum+= dish[i]+(10-dish[i]%10);
        if(dish[i]%10==0) sum-=10;
        if(min>(dish[i]%10) && dish[i]%10!=0) min= dish[i]%10;
    }
    sum-=(10-min);
    cout << min <<endl;
    cout << sum << endl;
    return 0;
}