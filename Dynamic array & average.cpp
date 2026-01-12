#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define MAXNUM 1000

int main(){

    srand(time(NULL));
    float average= 0;

    int size;
    printf("give size of the array \n");
    scanf("%d",&size);
    int myNumbers[size];

    int i;
    for(i=0; i<size; i++){
        int number = rand()%MAXNUM;
        printf("%d\n" ,number);
        myNumbers[i]=number;
        average = average + number;
    }

    average = average/size;



    printf("%.2f\n", average);
    return 0; 


}



