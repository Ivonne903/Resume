#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int reverse_bits(int num, int start, int end){
	int i=0;
	int j=0;
	int z =0;
	int y=0;
	int x=0;
	int w=0;
	int resta = 0;
	
	int bin[32]={};
	int bin2[32] ={};
	
	int bin3[32] ={};
	int bin4[32] = {};
	while (num>0)
	{
		bin[i]=num%2;
		num=num/2;
		i++;
	}

		
	for(z=start; z<= end; z++){
		bin3[y]=bin[z];
		y++;
		
	}
	
	
	
	for(i=0; i<32; i++){
		printf("%d", bin[i]);
	}
	
	
	
	
	
		printf("bin3\n");
	
	for(i=32-1; i>=0; i--){
		bin2[i]=bin[j];
		j=j+1;
	}
	
	
	
	for(i=0; i<4; i++){
		printf("%d", bin3[i]);
	}
	printf("tamano de %d\n", w);
	
	
		for(i=0; i<32; i++){
		printf("%d", bin2[i]);
	}
	resta = (end-start)+1;
	for(x=31; x>=0; x--){
		bin4[x]=bin2[x];
			if((x<= 31-start)&&(x>=31-end)){
				bin4[x] = bin3[resta-1];
				resta--;
			}
			
		
	}
	printf("\n");
	for(i=0; i<32; i++){
		printf("%d", bin4[i]);
	}
	
	
}
int main () {
	int start=2;
	int end = 5;
	reverse_bits(1985229328,  12,  23);
	
	return 0;
}
