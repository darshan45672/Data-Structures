/* Program demonstrating Bubble sort of n numbers */

#include<stdio.h>
#include<stdlib.h>

void bubble(int a[], int n){
    int temp;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            if (a[i]>=a[i+1]){
                temp = a[i];
                a[i]= a[i+1];
                a[i+1] = temp;
            }
        }
    }
}

int main(void){
    int a[20], n;

    printf("Enter the number of items:\t");
    scanf("%d",&n);
    printf("Enter %d items to sort:\n,n");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    bubble(a,n);

    printf("Sorted elements are");
    for (int i = 0; i < n; i++){
        printf("%d\t" , a[i]);
    }

 return 0;
  
}