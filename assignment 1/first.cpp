#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Corrected: use &n to read into variable n

    double sum = 0;
    int temp[100]; // Changed to a fixed-size array for simplicity

    for (int i = 0; i < n; i++) {
        int z;
        scanf("%d", &z); // Corrected: use &z to read into variable z
        sum += z;
        temp[i] = z;
    }

    double avg = sum / n;
    printf("%f", avg); // Corrected: use %f to print double

    return 0;
}
