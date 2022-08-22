#include<iostream>
using namespace std;

int main(){
    int a[5];
    int lasti;
    int lastmini=2<<28;
    for(int i=0; i<5; i++){
        cin>>a[i];
        if(lastmini>a[i]%10 && a[i]%10!=0){
            //cout<<a[i]%10<<endl;
            lastmini=min(lastmini, a[i]%10);
            //cout<<lastmini<<endl;
            lasti=i;
        }
    }
    int sum=0;
    for(int i=0; i<5; i++){
        if(i==lasti){
            continue;
        }
        sum+=a[i]/10*10;
        if(a[i]%10>0){
            sum+=10;
        }
    }
    sum+=a[lasti];
    cout<<sum<<endl;

    return 0;
}
