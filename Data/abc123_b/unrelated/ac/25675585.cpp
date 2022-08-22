#include <bits/stdc++.h>
using namespace std;

int main(){
    long long A,B,C,D,E;
    vector <long long > dishes(5);
    for(long long i=0;i<5;i++){
        cin>>dishes.at(i);
    }
    long long chn=9;
    long long chi=0;
    for(long long i=0;i<5;i++){
        if((chn%10>dishes.at(i)%10)&&(dishes.at(i)%10 !=0)){
            chi=i;
            chn=dishes.at(i);
        }
    }
    long long st=0;
    for(long long i=0;i<5;i++){
        if(i != chi){
            if(dishes.at(i)%10==0){
                st += dishes.at(i);
            }
            else{
                st += 10*(dishes.at(i)/10+1);
            }
        }

    }
    st += dishes.at(chi);
    cout<<st;



}