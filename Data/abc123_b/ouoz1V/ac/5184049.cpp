#include<iostream>
using namespace std;

int main(){
    int a[5];
    int mini=1000, minii=0;
    for(int i=0; i<5; i++){
        cin>>a[i];
        if(a[i]%10==0){
            continue;
        }
        mini=min(mini,a[i]%10);
        if(mini==a[i]%10){
            minii=i;
        }
    }

    int sum=0;
    for(int i=0; i<5; i++){
        if(i==minii){
            //cout<<mini<<endl;
            sum+=a[minii];
            continue;
        }
        //cout<<(a[i]+9)/10*10<<endl;
        sum+=(a[i]+9)/10*10;
    }
    cout<<sum<<endl;

    return 0;

}
