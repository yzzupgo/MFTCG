#include  <iostream>
#include  <stdio.h>
using namespace std;


int main(){

    int maketime[5];
    int number;
    number = 0;
    cin >> maketime[number];
    number = number + 1;
    cin >> maketime[number];
    number = number + 1;
    cin >> maketime[number];
    number = number + 1;
    cin >> maketime[number];
    number = number + 1;
    cin >> maketime[number];

    int astime[5];

    int maxi;
    int maxbet;
    maxbet = 0;
    for( int ni = 0 ; ni < 5 ; ni++ ){
        if(maketime[ni] % 10 > maxbet){
            maxi = ni;
        }
    }

    int cost;
    cost = 0;
    for( int ni = 0 ; ni < 5 ; ni++ ){
        if(ni != maxi){
            cost = cost + ((int)maketime[ni]/10) * 10;
            if(maketime[ni] % 10 > 0){
                cost = cost + 10;
            }
            
        }
    }
    cost = cost + maketime[maxi];
    cout << cost;


}