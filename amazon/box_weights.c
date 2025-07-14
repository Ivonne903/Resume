#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int* minimalHeaviestSetA(int arr_cout, int* arr, int* result_cout){
	int i=0;
	int j=0;
	int y=0;
	int indice_A = 0;
	int indice_B = 0;
	int* result; 
	int sum;
	int sum1=0;
	int ARRAY_A[2];
	int ARRAY_B[]={};
	int x=0;
	for(i=0; i<1; i++){
		ARRAY_A[indice_A]= arr[i];
		for(j=0; j<arr_cout; j++){
		  if(i!=j){
		  	indice_A = indice_A + 1;
		  	sum = arr[i]+arr[j];
		  	ARRAY_A[indice_A] = arr[j];
		  	for(x=0; x<2;x++){
		  		printf("ARRAY_A : %d\n", ARRAY_A[x]);
			  }
		  	indice_A=0;
		  	printf("sum = %d\n", sum);
		  	
		  	for(y=0; y<arr_cout; y++){
		  	//ARRAY_B[indice_B] = arr[y];
			if(y!=i){
				if(y!=j){
					//ARRAY_B[indice_B] = arr[y];
					sum1 = sum1 + arr[y];
					//ARRAY_B[indice_B] = arr[y];
					//printf("ARRAY %d\n", arr[y]);
					//indice_B = indice_B + 1;
					//printf("ARRAY_B: %d\n", ARRAY_B[indice_B]);
					
					printf("ARRAY_B: %d\n", arr[y]);
					
				}
				
			}
	
		  }
		  
		  printf("sum1= %d\n", sum1);
		  sum1 =0;
		  
		  
		  
				
		  
		}
		
		
			
		}
		
		
	
}
	
		/*if(sum>sum1){
			//printf("%d\n",sum);
			//printf("%d\n",arr[i]);
			
			break;
		}
		else{
			sum = arr[i]+arr[i+1];
			for(i=2; i<arr_cout; i++){
			sum1=sum1+arr[i];
			}
		}
		
		printf("%d\n", sum1);
		printf("%d\n", sum);
		*/
		
		
		
	
	
	return result;
}
int main( ) {
	int ARRAY[] = {5,4,2,5,1,6};
	int arr_cout = sizeof(ARRAY)/sizeof(ARRAY[0]);
	int result_cout;
	
	int* result = minimalHeaviestSetA(arr_cout, &ARRAY, &result_cout);
	
	return 0;
}
