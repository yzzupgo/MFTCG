
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <numeric>
using namespace std;


int main()
{
    int a[6];
    for(int i=1;i<6;i++){
        cin>>a[i];
    }
    
    int ans=0;
    
    
    for(int i=1;i<6;i++){
        if(a[i]%10==0){
        ans+=a[i];
        }
        else{
            ans+=((a[i]/10)+1)*10;
        }
    }
    
    vector<int> b;
    
    for(int i=1;i<6;i++){
        if(a[i]%10!=0){
        b.push_back(a[i]%10);
        }
    }
    
    if(b.begin()==b.end()){
        cout<<ans<<endl;
    }
    else{
    sort(b.begin(),b.end());
    
    auto itr=b.begin();
    
    if(*itr!=0){
        ans-=10-*itr;
    }
    
    cout<<ans<<endl;
    }
    
    
    
    }

