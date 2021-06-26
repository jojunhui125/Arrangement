#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS 

int main() {
    int C, N, i, j;

    int sum = 0;
    int num = 0;
    double avg = 0;

    scanf("%d", &C);

    for (i = 0; i < C; i++) {
        scanf("%d", &N);

        int grade[N];
        sum = 0;

        for (j = 0; j < N; j++) {
            scanf("%d", &grade[j]);
            sum += grade[j];
        }
        avg = (double)sum / (double)N;

        num = 0;
        for (j = 0; j < N; j++) {
            if (avg < grade[j])
                num++;
        }
        printf("%.3f%%\n", (double)num / (double)N * 100);
    }

    return 0;
}

