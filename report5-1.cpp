#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MET 3    

void generate(int (*A)[MET]) {
    int i, j;
    for (i = 0; i < MET; i++)
        for (j = 0; j < MET; j++)
            A[i][j] = rand() % 11 - 5;   
}

void printMatrix(int (*A)[MET]) {
    int i, j;
    for (i = 0; i < MET; i++) {
        for (j = 0; j < MET; j++)
            printf("%4d ", A[i][j]);
        printf("\n");
    }
}

void printMatrixDouble(double (*A)[MET]) {
    int i, j;
    for (i = 0; i < MET; i++) {
        for (j = 0; j < MET; j++)
            printf("%8.3f ", A[i][j]);
        printf("\n");
    }
}

void multiply(int (*A)[MET], int (*B)[MET], int (*C)[MET]) {
    int i, j, k;
    for (i = 0; i < MET; i++) {
        for (j = 0; j < MET; j++) {
            C[i][j] = 0;
            for (k = 0; k < MET; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}


double determinant(int (*A)[MET]) {
    double a = A[0][0], b = A[0][1], c = A[0][2];
    double d = A[1][0], e = A[1][1], f = A[1][2];
    double g = A[2][0], h = A[2][1], i = A[2][2];

    return a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
}


int inverseMatrix(int (*A)[MET], double (*inv)[MET]) {
    double D = determinant(A);
    double a = A[0][0], b = A[0][1], c = A[0][2];
    double d = A[1][0], e = A[1][1], f = A[1][2];
    double g = A[2][0], h = A[2][1], i = A[2][2];

    if (D == 0.0)
        return 0;

    inv[0][0] = (e * i - f * h) / D;
    inv[0][1] = -(b * i - c * h) / D;
    inv[0][2] = (b * f - c * e) / D;

    inv[1][0] = -(d * i - f * g) / D;
    inv[1][1] = (a * i - c * g) / D;
    inv[1][2] = -(a * f - c * d) / D;

    inv[2][0] = (d * h - e * g) / D;
    inv[2][1] = -(a * h - b * g) / D;
    inv[2][2] = (a * e - b * d) / D;

    return 1;
}

int main(void) {
    int A[MET][MET], B[MET][MET], C[MET][MET];
    double InvA[MET][MET];
    int k;
    int i, j;

    srand(time(NULL));   

    generate(A);
    generate(B);
    k = rand() % 11 - 5;

    printf("행렬 A\n");
    printMatrix(A);

    printf("\n행렬 B\n");
    printMatrix(B);

    printf("\n스칼라 k = %d\n", k);

    
    printf("\nA + B\n");
    for (i = 0; i < MET; i++)
        for (j = 0; j < MET; j++)
            C[i][j] = A[i][j] + B[i][j];
    printMatrix(C);


    printf("\nA - B\n");
    for (i = 0; i < MET; i++)
        for (j = 0; j < MET; j++)
            C[i][j] = A[i][j] - B[i][j];
    printMatrix(C);

    printf("\nk * A:\n");
    for (i = 0; i < MET; i++)
        for (j = 0; j < MET; j++)
            C[i][j] = k * A[i][j];
    printMatrix(C);

   
    printf("\nA * B\n");
    multiply(A, B, C);
    printMatrix(C);

    
    printf("\ndet(A)\n");
    printf("det(A) = %.3f\n", determinant(A));

    
    printf("\n역행렬 존재 여부\n");
    if (inverseMatrix(A, InvA)) {
        printf("A는 역행렬이 존재\n\nA^{-1}:\n");
        printMatrixDouble(InvA);
    }
    else {
        printf("A는 역행렬이 존재하지 않음\n");
    }

    return 0;
}
