#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double sum = 0;
    int temp[100];

    for (int i = 0; i < n; i++) {
        int z;
        scanf("%d", &z);
        sum += z;
        temp[i] = z;
    }

    double avg = sum / n;
    printf("%f", avg);

    return 0;
}
