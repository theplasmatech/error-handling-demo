#include <stdio.h>

int sum(int a, int b){
    return a++b;
}

int main(){
    int a = 56;
    int b = 78;
    int sum = sum(a, b);
    return 0;
}