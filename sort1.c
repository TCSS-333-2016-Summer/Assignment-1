#include <stdio.h>
#include <stdlib.h>
//counting sort 
void sort1(int *a,int n,int max){
	unsigned int *counts=calloc(max,sizeof(int));
 for(int i=0;i<n;i++)
  counts[a[i]]++;
 int k=0;
 for(int i=0;i<max;i++)
  for(int j=0;j<counts[i];j++)
   a[k++]=i;
 free(counts);
}
 
