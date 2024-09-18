#include<stdio.h>
int add(int x, int y);
void main() {
    int a = 5, b = 5;
    int sum = add(a + b);
}

int add(int x, int y){
    printf("Sum=%d\n",x+y);
}