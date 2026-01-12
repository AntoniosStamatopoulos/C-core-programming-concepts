#include <stdio.h>

int check_card_number(char *str){
	
	int pos = 1; 
	int sum = 0 ;
	char *p = str +15;  
	
	while(p>= str ){
		int digit = *p - '0';
		
		if(digit < 0 || digit > 9){ 
			return 0;
		}
		
		if(pos % 2 == 0){
			int d = digit * 2;
			if(d > 9){
				d = d - 9;
			}
			
			sum += d; 
		}else{
			sum += digit;
		}
		pos++;
		p--;
		
	}
	
	if (sum% 10 == 0 ){
		return 1;
	}else{
		return 0;
	}
	
}

int main(int argc, char *argv[] ){
	
	int i ;
	
	for (i =1; i<argc; i++ ){
		
		if (check_card_number(argv[i])){
			printf("%s: Valid\n",argv[i]);
			
		}else{
			printf("%s:InValid\n",argv[i]);
		}
	}
	
	return 0 ;
	
	
}

