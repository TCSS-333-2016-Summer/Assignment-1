#include <stdio.h>
#include <stdlib.h>
//built in qsort - uses hybrid quicksort/heapsort/insertion sort
static int cmp (const void *p, const void *q){
	 return(  *(int*)p - *(int*)q);
}	
void sort2(int *a, int n){
	qsort(a,n,sizeof(int),cmp);
}	
