#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, char *argv[]){ 

    int i ;
    int final ;
    int temp;


    if ( strcmp(argv[1],"+")==0){
        final =0;
        for (i=2; i<argc; i++){    
            temp = atoi(argv[i]);
            final = final + temp;    
        }
    }else if( strcmp(argv[1],"-")==0){
        final = atoi(argv[2]);
        for(i=3; i<argc; i++){
            final = final - atoi(argv[i]);

        }
    }else if (strcmp(argv[1],"x")==0)
    {
        final = 1;
        for(i=2; i<argc; i++){
            final = final*atoi(argv[i]);
        }
    }
    else{
        final = atoi(argv[2]);
        for(i=3; i<argc; i++){
            final = final/atoi(argv[i]);
        }
    }
    
    printf("%d\n", final);

}