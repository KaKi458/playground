#include <stdio.h>

void changeValueWithoutPointer(int variable) {
    variable += 10;
    printf("%d\n", variable);
}

void changeValueWithPointer(int* variable) {
    *variable += 10;
    printf("%d\n", *variable); 
}

int main() {
    int a = 5;
    printf("%d\n", a);

    changeValueWithoutPointer(a);
    printf("%d\n", a);

    changeValueWithPointer(&a);
    printf("%d\n", a); 

    return 0;
}