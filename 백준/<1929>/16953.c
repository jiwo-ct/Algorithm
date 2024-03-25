#include <stdio.h>
int b, value = 0;

void recursion(int num, int count) {
    if(num == b) {
        printf("%d", count+1);
        value = 1;
    }
    if(num <= 500000000) 
        recursion(num*2, count+1);
    if(num <= 100000000)
        recursion(num*10+1, count+1);
}

int main() {
    int a;
    scanf("%d %d", &a, &b);
    recursion(a, 0);
    if(!value) printf("-1");
}