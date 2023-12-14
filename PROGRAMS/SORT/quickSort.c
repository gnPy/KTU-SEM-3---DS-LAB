#include <stdio.h>

void swap(int *a , int *b){
	int temp = *b ;
	*b = *a ; 
	*a = temp ; 
	} 

int partition(int A[] , int low, int high){
	int pivot = A[low] , i = low , j = high ;
	while(i<j){
		while(A[i] <= pivot){
			i++ ; 
			}
		while(A[j] > pivot){
			j-- ; 
			}
		if(i<j){
			swap(&A[i] ,&A[j]) ; 
			}
		}
	swap(&A[low] ,&A[j]) ;
	return j ;  
	}

void quicksort(int A[] , int low , int high){
	if(low<high){
		int pivot = partition(A , low , high) ; 
		quicksort(A , low , pivot) ; 
		quicksort(A , pivot+1 , high) ; 
		}
	}





int main(){
	int arr[] = {5 , 4 , 3 , 2 , 1} ; 
	
	quicksort(arr , 0 , 4) ; 
	
	for( int i = 0 ; i < 5 ; i++){
		printf("%d " , arr[i]) ; 
		}
	}

