
#include "merge_sort.h"
#include "stdlib.h"

void Merge(int *A,int *L,int leftSize,int *R,int rightSize) {
	int i,j,k;

	i = 0; j = 0; k =0;

	while(i<leftSize && j< rightSize) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftSize) A[k++] = L[i++];
	while(j < rightSize) A[k++] = R[j++];
}

void merge_sort(int *A, int size) {
    int i,mid,*L,*R;
    if(size < 2) return;

    mid = size/2;

    L = (int*)malloc(mid*sizeof(int));
	R = (int*)malloc((size - mid)*sizeof(int));

	for(i = 0;i<mid;i++) L[i] = A[i];
	for(i = mid;i<size;i++) R[i-mid] = A[i];

	merge_sort(L,mid);
	merge_sort(R,size-mid);
	Merge(A,L,mid,R,size-mid);
    free(L);
    free(R);
}
