#include <stdio.h>
#include <stddef.h> 

int main() {

	    int array[] = {10, 20, 30, 40, 50};

	       
	        size_t array_size = sizeof(array) / sizeof(array[0]);

		   
		    printf("배열의 크기: %zu\n", array_size); 

		     
		        printf("배열의 요소:\n");
			    for (size_t i = 0; i < array_size; i++) {
				            printf("%d ", array[i]);
					        }
			        printf("\n");

				    return 0;
}
