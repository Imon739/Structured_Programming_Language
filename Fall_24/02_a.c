#include<stdio.h>
int main()
{
    int d;
    int result = x - y;

    if (result == 1) {
        d = x - y;
        printf("%d", d);
        // fall-through (no break) → so continue to case 2
        if (result == 2) {
            // only break here
        }
    }
    else if (result == 2) {
        // just break (do nothing)
    }
    else if (result == 5) {
        d = i++;
        // fall-through → continue to case 7 and default
        printf("%d", d);
    }
    else if (result == 7) {
        // fall-through to default
        printf("%d", d);
    }
    else {  // default
        printf("%d", d);
    }

}
