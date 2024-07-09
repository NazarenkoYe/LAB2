#include <stdio.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
int main() {
    int p;
    printf("Enter the number of elements from2 to 20: ");
    scanf("%d", &p);
    if (p < 2 || p > 20) {
        printf("Invalid input. The number of elements must be between 2 and 20.\n");
        return 1;
    }
    int numbers[p];
    printf("Enter %d natural numbers separated by space: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }
    int result = numbers[0];
    for (int i = 1; i < p; i++) {
        result = lcm(result, numbers[i]);
    }
    printf("The least common multiple of the given numbers is: %d\n", result);
    return 0;
}
