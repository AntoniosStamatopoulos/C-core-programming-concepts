#include <stdlib.h>
#include <stdio.h>


void search(int x[], int size, int numb, int **ptr){
    int i;
    int* pointer;
    for (i=0; i <=size; i++){
        if(numb == x[i]){
            *ptr = &x[i];
            return;
        } 
    }
    *ptr = 0;

    
}
 
int main(){

    int x[10]= {1,2,3,4,5,6,7,8,9,10};
    int number;
    int* pointer;


    printf("give me an integer \n");
    scanf("%d", &number);


    search(x,10,number,&pointer);

    if( pointer != 0){
        printf("%d\n", *pointer);
        printf("%ld\n", pointer - x );

    }

    // to & einai san na exw enan akoma pointer 
    // & dieythinsh 
    //* periexomeno

}