#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main () {
    long a, b, c;
    int count = 0, price = c - b;
    cin >> a >> b >> c;

    while(1){
        price += price;
        count++;

        if((price - a) > 0){
            break;
        }
    }
    cout<<count<<endl;

    return(0);
}

