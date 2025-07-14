#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


char* receivedText(char* S) {
    char i,n;
    n= strlen(S);
    printf("%c",n);
    char resultado[]=" ";
    for(i=0; i<n-1; i++){
    	resultado[i]= S[i];
    	//printf("%c\n", resultado[i]);
    	if(S[i]== '*'){
    		//printf("%c\n", 'Y');
    		//resultado[i-1]= S[i];
    		
    		
		}
		resultado[i]=S[i];
		
	
		
	}
	
	
    return resultado;

}

int main() {
	char mensaje[] = {'H','E','*','<','L','L','>','O'};
	char *S =&mensaje;
	//char mi_cadena[] = "Este es un ejemplo";
    //printf("%s\n", mi_cadena);
	char* result = receivedText(S);

	
	return 0;
}
