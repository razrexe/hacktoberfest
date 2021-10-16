#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int* generateND(int mean, int var, int N)
{
    srand(time(0));
    int* a = malloc(N * sizeof(int));
    int n = 5; //average of n UD samples gives one ND sample
    int width = (int)sqrt(var * 3 * n);
    int start = mean-width, end = mean+width;
    for (int i=0; i<N; i++)
    {
        a[i] = 0;
        for (int j = 0; j < n; j++)
            a[i] += (rand() % (end - start + 1)) + start;
        a[i] /= n;
    }
    return a;
}

float* normalizeND(const int* a, int N, float mean, float var)
{
    // find standard deviation of given dataset
    float stddev = sqrt(var);

    // make a standard normal distribution
    float* arr = malloc(N * sizeof(float));
    for (int i=0; i<N; i++)
    {
        arr[i] = ((float)a[i] - mean)/stddev;
        if (arr[i] > 3 * stddev) arr[i] = 3 * stddev; //clamp extremes
        if (arr[i] < -3 * stddev) arr[i] = -3 * stddev;
    }

    //convert distribution to range of 0...1
    for (int i=0; i<N; i++)
        arr[i] = arr[i]/(6 * stddev) + 0.5f;

    return arr;
}

int main()
{
    printf("Enter the mean, variance, and the size of the normal dataset: ");
    int m, v, N;
    scanf("%d %d %d", &m, &v, &N);
    int *a = generateND(m, v, N);
    printf("The dataset is: \n");
    for (int i=0; i<N; i++)
        printf("%d ", a[i]);
    float *fa = normalizeND(a, N, m, v);
    printf("\nThe normalized dataset is: \n");
    for (int i=0; i<N; i++)
        printf("%f ", fa[i]);
    return 0;
}