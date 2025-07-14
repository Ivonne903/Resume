#include <stdio.h>





/*char* findNumber(int arr_cout, int* arr, int k){
    int i;
    char *response;
     
    

    
    
    for(i=0; i<arr_cout; i++){
    	if(k == *(arr+i)){
            static char s[] = "YES";
            response = &s[0];
            break;  
        } 
        else{
        	static char n[] = "NO";
        	response = &n[0];
        
		}
    	
	}
    
       
    
    return response;
}
*/

char* findNumber(int arr_cout, int* arr, int k){
    int i;
    char *response;

    
for(i=0; i<arr_cout; i++){
    	if(k == arr[i]){
    		
            response = 'Y';
            break;  
        } 
        else{
        	response = 'N';
		}
    	
	}
    
       
    
    return response;

}
    


int main()
{
    int arr_cout = 6;
    int ARRAY[] = {0,2,3,4,5,6};
    int k=1;
    char *response = findNumber(arr_cout, &ARRAY, k);
    printf("%c\n",response);

    return 0;
}
