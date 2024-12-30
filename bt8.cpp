#include <stdio.h>
#include <stdlib.h>

int ucln(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a; 
}
int main() {
    int num1 = 33;  
    int num2 = 99; 
    int result = ucln(num1, num2);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, result);

    return 0;
}

