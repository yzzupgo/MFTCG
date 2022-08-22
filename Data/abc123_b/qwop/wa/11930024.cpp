#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
    int min=10,sum=0;
    vector<int>c(100000000);
    vector<int>d(100000000);
    for(int i=0;i<5;i++){
        cin>>c[i];
        sum+=((c[i]+9)/10)*10;
        if(min>c[i]%10&&c[i]!=0){
            min=c[i]%10;
        }

    }
    
    cout<<sum-10+min;
}