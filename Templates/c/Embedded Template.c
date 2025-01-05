#include <stdio.h>

void delay(unsigned int ms) {
    while (ms--) {
        for (volatile int i = 0; i < 1000; i++);
    }
}

int main() {
    printf("Embedded system initialized.\n");
    delay(1000);
    printf("Program finished.\n");
    return 0;
}

