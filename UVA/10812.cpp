#include <iostream>

using namespace std;

int main() {

    int n, i, s, d;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d", &s);
        scanf("%d", &d);

        bool hasResult = false;

        int scoreB = 0;

        for (int scoreA = s; scoreA >= 0; scoreA--) {
            scoreB = s - scoreA;

            if (scoreA - scoreB == d) {
                printf("%d %d\n", scoreA, scoreB);
                hasResult = true;
                break;
            }
        }

        if (!hasResult) {
            printf("impossible\n");
        }

    }

    return 0;
};