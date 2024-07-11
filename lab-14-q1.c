#include <stdio.h>

int count_pairs(int N);

int main() {
    int N;
    printf("Enter the value of N (1 <= N <= 500): ");
    scanf("%d", &N);

    if (N >= 1 && N <= 500) {
        int result = count_pairs(N);
        printf("Number of pairs: %d\n",result);
    }
    else {
        return 1;
    }

    return 0;
}

int count_pairs(int N) {
    int count = 0;
    for (int A = 1; A <= 500; A++) {
        for (int B = 1; B < A; B++) {
            if ((A * A - B * B) == N) {
                count++;
            }
            if ((A * A - B * B) < N) {
                break;
            }
        }
    }
    return count;
}
