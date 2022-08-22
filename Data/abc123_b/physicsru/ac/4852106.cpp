#include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> time(5,0);
    int sum=0,m=INT_MAX;
    for(int i=0;i<5;i++){
        cin>>time[i];
        sum+=time[i];
        int temp=time[i]%10;
        if(temp==0) temp=10;
        sum+=10-temp;
        m=min(temp,m);
    }
    sum=sum-(10-m);
    cout<<sum;
    return 0;
}
