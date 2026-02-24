#include <stdio.h>

int main() {
    int gasFee = 20;

    if (gasFee < 30) {
        printf("Transaction Approved on Base Network 🚀\n");
    } else {
        printf("Gas fee too high! Try later.\n");
    }

    return 0;
}
