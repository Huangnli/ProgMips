#include <stdio.h>

int or(char num1, char num2) {
	if(num1 == 0 && num2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}	

int and(char num1, char num2) {
      if(num1 == 1 && num2 == 1){
        return 1;
    }
    else{
        return 0;
    }
}

void add(char num1[], char num2[]) {
    int carryIn = 0;
  	int carryOut = 0;
    int tam = 32;  // tamanho do vetor
    char result[32];    
            
    for(int i = 0; i < tam; i++){
        carryIn = carryOut;
        int and1 = and(num1[i], num2[i]);
        int or1 = or(num1[i], num2[i]);
        if(carryIn == 0){
            if(and1 == 1 && or1 == 1){
                result[i] = 0;
                carryOut = 1;
            }
            else
                if(and1 == 0 && or1 == 0){
                    result[i] = 0;
                    carryOut = 0; 
                }
                else{
                    result[i] = 1;
                    carryOut = 0;
                }
            }
            else{
                if(and1 == 1 && or1 == 1){
                    result[i] = 1;
                    carryOut = 1;
                }
                else 
                	if(and1 == 0 && or1 == 0){
                          result[i] = 1;
                          carryOut = 0; 
                }
                else{
                    result[i] = 0;
                    carryOut = 1;
                }
            }
        } 
    for(int i = 0; i < 31; i++){
        printf("%d ", result[i]);
    }  
    printf("\n");
}

int main (void){
	char x[31];
	char y[31];

	for(int i = 0; i < 32; i++){
		x[i] = 0;
		y[i] = 0;
	}
	y[23] = 1;
	x[5] = 1;
	add(x, y); 
    return 0;
}
