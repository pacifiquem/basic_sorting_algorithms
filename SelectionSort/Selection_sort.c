#include <stdio.h>

int main() {
	
	int start_index, min_pos, temp, k , n, arr[n]; //n is number of element array(arr) will hold
	
	printf("Enter number of element : ");
	scanf("%d", &n);
	
	for(k=0; k<n; k++) {
		printf("Enter element %d: ", k+1);
		scanf("%d", &temp);
		
		arr[k] = temp;
	}
	temp = 0 ;
	
	for(start_index = 0; start_index < n; start_index++) {
		min_pos = start_index;
		
		for(k=start_index+1; k<n; k++) {
			if(arr[min_pos] > arr[k]) {
				temp = arr[min_pos];
				arr[min_pos] = arr[k];
				arr[k] = temp;
			}
		}
	}
	
	printf("__ The sorted output__");
	for(k=0; k<n; k++) {
		printf("\nElemeent %d is %d ", k+1, arr[k]);
	}
	
	return 1;
}
