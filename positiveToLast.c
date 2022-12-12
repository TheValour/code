#include <stdio.h>

void swap(int *arr,int n){

    for(int i=0,j=0;i<n && j<n;i++){
        
        if(arr[i]>-1){

            while(j<n && arr[j]>=0){
                j++;
            }
            
            int k = j;
            while(k>0 && k!=n && arr[k-1]>-1){
                int temp = arr[k];
                arr[k]= arr[k-1];
                arr[k-1] = temp;
                k--;
            }
        }
        else{
            j++;
        }
    }
}

int main(){
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the  elements of array : \n");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    swap(arr,n);

    printf("\nFinal array : \n");
    for (int i = 0; i < n; i++){
        printf("%d  ",arr[i]);
    }
  
  return 0;
}
