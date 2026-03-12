#include <stdio.h>
int main() {
    int cap, cur, add, new;

    scanf("%d %d %d", &cap, &cur, &add);

    new = cur + add;

    if (new > cap) {
        printf("Overflow\n");
    }
    else {
        printf("Safe\n");
    }

    printf("%d", new);
    return 0;
}