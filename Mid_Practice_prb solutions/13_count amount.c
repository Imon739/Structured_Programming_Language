#include <stdio.h>

int main() {
    int amount;
    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[10] = {0};

    printf("Enter amount: ");
    scanf("%d", &amount);

    for(int i = 0; i < 10; i++) {
        if(amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount -= count[i] * notes[i];
        }
    }

    printf("\nTotal notes:\n");
    for(int i = 0; i < 10; i++) {
        if(count[i] != 0) {
            printf("%d taka note: %d\n", notes[i], count[i]);
        }
    }

    return 0;
}
