#include <stdio.h>

// Simple function to print message
void deployContract() {
    printf("Smart Contract deployed on Base 🚀\n");
}

// Function to add two numbers
int addGas(int fee1, int fee2) {
    return fee1 + fee2;
}

int main() {

    deployContract();   // calling first function

    int baseFee = 20;
    int priorityFee = 5;

    int total = addGas(baseFee, priorityFee);  // calling second function

    printf("Total Gas Fee: %d\n", total);

    return 0;
}
