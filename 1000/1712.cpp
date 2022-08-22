#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
    int a, b, c;
    int count = 1;

    cin >> a >> b >> c;

    if(b>c || a==0 || (c-b)==0){
        printf("%d\n", -1);
    }
    else{
        count += a/(c-b);
        printf("%d\n", count);
    }
    return 0;
}