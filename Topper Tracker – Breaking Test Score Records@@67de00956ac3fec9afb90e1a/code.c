#include <stdio.h>

void trackScores(int scores[], int n, int result[]) {
    int highest = scores[0], lowest = scores[0];
    int highBreaks = 0, lowBreaks = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            highBreaks++;
        } else if (scores[i] < lowest) {
            lowest = scores[i];
            lowBreaks++;
        }
    }

    result[0] = highBreaks;
    result[1] = lowBreaks;
}

// int main() {
//     int n;
//     scanf("%d", &n);

//     int scores[1000];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &scores[i]);
//     }

//     int result[2];

//     // Call trackScores function
//     trackScores(scores, n, result);

//     // Output results: highest and lowest record breaks
//     printf("%d %d\n", result[0], result[1]);

//     return 0;
// }
