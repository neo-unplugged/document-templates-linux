#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <command>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "greet") == 0) {
        printf("Hello, User!\n");
    } else {
        printf("Unknown command.\n");
    }

    return 0;
}

