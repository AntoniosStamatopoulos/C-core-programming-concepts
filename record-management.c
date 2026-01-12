#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *infile, *positive, *negative;
    int *array;

    int negatives = 0;
    int positives = 0;

    if ((positive = fopen("positive.txt", "w+")) == NULL)
    {
        return 1;
    }

    if ((infile = fopen("data.txt", "r")) == NULL)
    {
        return 1;
    }

    if ((negative = fopen("ngetive.txt", "w+")) == NULL)
    {
        return 1;
    }

    int k;
    int i;
    int number;

    fscanf(infile, "%d", &k);
    array = (int *)malloc(k * sizeof(int));

    for (i = 0; i < k; i++)
    {
        fscanf(infile, "%d", &number);
        if (number < 0)
        {
            negatives = negatives + 1;
        }
        else
        {
            positives = positives + 1;
        }
        array[i] = number;
    }
    fprintf(positive, "%d\n", positives);
    fprintf(negative, "%d\n", negatives);

    for (i = 0; i < k; i++)
    {
        if (array[i] < 0)
        {
            fprintf(negative, "%d\n", array[i]);
        }
        else
        {
            fprintf(positive, "%d\n", array[i]);
        }
    }
    fclose(infile);
    // fclose(positive);
    fclose(negative);
    
    rewind(positive);

    fscanf(positive, "%d", &positives);
    int final = 0;

    for (i = 0; i < positives; i++)
    {

        fscanf(positive, "%d", &number);

        final = final + number;
    }

    printf("%d\n", final);

    fclose(positive);
    return 0;
}
// C program demonstrating structured data management using dynamic memory allocation.
