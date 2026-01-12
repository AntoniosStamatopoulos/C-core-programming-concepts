#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* array[26];


charstats(char *s){
	int i; 
	char c;
	
	for(i=0; s[i] != '\0'; i++){
		c = s[i];
		c= tolower((unsigned char)c);
		if (c>='a' && c<='z'){
			int index = c-'a';
			array[index]++;
		}	
	}
}

int main(){	

	char line[256];
	
	while(1){
		printf("give string ### to stop");
		if (fgets(line, sizeof(line), stdin) == NULL){
			break;
		}
		if (line[0] == '#' && line[1]=='#' && line[2]=='#'){
			break;
			
		}
		charstats(line);
		
	}
	printf("\nLetter statistics:\n");
	for (int i = 0; i < 26; i++) {
	    printf("%c:%d", 'A' + i, array[i]);
	    if (i < 25) {
	        printf(" ");   
	    }
	}
	printf("\n");

	return 0;
	
	
	
}

