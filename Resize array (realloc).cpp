
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i, n1 = 0, n2 = 0;
	int *a1;


	printf("Enter array size: ");
	scanf("%d", &n1);


	a1 = (int *) malloc(n1 * sizeof(int));
	for(i = 0; i < n1; i++)
	{
	
		a1[i]= 55;
	}

	
	printf("Enter new array size: ");
	scanf("%d", &n2);

	
	a1 = realloc(a1, n2*sizeof(int));
    


	if (n2>n1){
        
        int stoixeia = n2-n1;
        for (i=n2-1; i>=n1; i--){
            a1[i]=0;
        }
    }

	for(i = 0; i < n2; i++)
		printf("%d ",  a1[i]);
	printf("\n");


	free (a1);

	return 0;
}

