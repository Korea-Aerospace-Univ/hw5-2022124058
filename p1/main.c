#include <stdio.h>

int main(void)
{
    int N;
    int A, B, C;
    int found = 0;

    scanf("%d", &N);

    for (A = 1; A <= N / 900; A++) {
        for (B = 2; B <= N / 750; B += 2) {
            for (C = 1; C <= N / 200; C++) {

                if (900 * A + 750 * B + 200 * C == N) {
                    if (C < A || C < B) {
                        printf("%d %d %d\n", A, B, C);
                        found = 1;
                    }
                }

            }
        }
    }

    if (found == 0) {
        printf("none\n");
    }

    return 0;
}
