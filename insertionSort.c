#include "insertionSort.h"

void insertion_sort(int *a, int n) {
	for(int i = 1; i < n; ++i) {
		int tmp = a[i];
		int j = i;
		while(j > 0 && tmp < a[j - 1]) {
			a[j] = a[j - 1];
			--j;
		}
		a[j] = tmp;
	}
}
 
