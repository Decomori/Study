#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main () {
    int a, b;
    cin >> a >> b;

    (a == b) ? printf("%s\n", "==") : (a > b) ? printf("%c\n", '>') : printf("%c\n", '<');
}