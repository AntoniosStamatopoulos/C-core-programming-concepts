#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *data;

    if ((data = fopen(argv[1], "rb")) == NULL)
    {
        return 1;
    }

    int i;
    int filesize;
    int byte;
    int N;
    int sum = 0;
    int counter_bytes = 0;
    N = atoi(argv[2]);

    fseek(data, 0, SEEK_END);
    filesize = (int)ftell(data);

    fseek(data, 0, SEEK_SET);

    for (i = 0; i < filesize; i++)
    {
        byte = fgetc(data);
        sum = sum + byte;
        counter_bytes++;
    }

    printf("the counter of the bytes are %d\n", counter_bytes);
    printf("the sum of bytes is %d\n", sum);

    // μερος Β)

    fseek(data, 0, SEEK_SET);
    int counter_of_value = 0;

    for (i = 0; i < filesize; i++)
    {
        byte = fgetc(data);

        if (byte % N == 0)
        {
            counter_of_value++;
        }
    }

    if (counter_of_value == 0)
    {
        printf("the value does not exist");
    }
    else
    {
        printf("the number of times that value appears are %d\n", counter_of_value);
    }

    fclose(data);

    return 0;
}