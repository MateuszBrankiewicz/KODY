#include <stdio.h>

#define N 5
#define M 3

void getData(double grades[N][M]) {
    for (int i = 0; i < N; i++) {
        printf("Podaj oceny dla zespołu %d:\n", i+1);
        for (int j = 0; j < M; j++) {
            printf("Ocena dla studenta %d: ", j+1);
            scanf("%lf", &grades[i][j]);
        }
    }
}

double teamAvg(double grades[M]) {
    double sum = 0;
    for (int i = 0; i < M; i++) {
        sum += grades[i];
    }
    return sum / M;
}

double totalAvg(double grades[N][M]) {
    double sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += grades[i][j];
        }
    }
    return sum / (N*M);
}

double bestGrade(double grades[N][M]) {
    double best = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (grades[i][j] > best) {
                best = grades[i][j];
            }
        }
    }
    return best;
}

int main() {
    double grades[N][M];
    getData(grades);
    for (int i = 0; i < N; i++) {
        printf("Średnia dla zespołu %d: %lf\n", i+1, teamAvg(grades[i]));
    }
    printf("Średnia dla wszystkich studentów: %lf\n", totalAvg(grades));
    printf("Najlepsza ocena: %lf\n", bestGrade(grades));
    return 0;
}
