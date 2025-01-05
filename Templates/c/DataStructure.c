#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node node1 = {10, NULL};
    printf("Node data: %d\n", node1.data);
    return 0;
}

