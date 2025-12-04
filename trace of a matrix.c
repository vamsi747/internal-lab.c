#include <stdio.h>

int main() {
    int a[10][10], n, i, j, trace=0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
        trace += a[i][i];

    printf("Trace = %d\n", trace);
    return 0;
}