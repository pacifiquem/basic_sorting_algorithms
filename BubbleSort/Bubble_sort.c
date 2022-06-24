#include <stdio.h>

int main() {
	
	int n, i, j, k, temp;
	
	printf("Enter number of element to sort: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(k=0; k<n; k++) {
		printf("Enter element %d : ", k+1);
		scanf("%d", &temp);
		arr[k] = temp;
	}
	
	//reseting temp to 0
	temp = 0;
	
	//sorting by using bubble_sort algorithm
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	
	printf("\n _____Element in sorted manner are ______\n\n");
	for(k=0; k<n; k++) {
		printf("Element %d : %d\n", k+1, arr[k]);
	}
	
	return 0;
}