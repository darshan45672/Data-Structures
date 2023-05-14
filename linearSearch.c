/* Program to perform linear search */

#include<stdio.h>
#include<stdlib.h>


int linear( int key, int a[], int n){
    for (int i = 0; i < n; i++){
        /* code */
        if (key == a[i])    {
            /* code */
            return i; 
        }

        return -1;
    }
}

int main(void){
    int n, key, a[20], i, pos;
    printf("\nEnter the value of n:\t");
    scanf("%d",&n);
    printf("Enter the values \n");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the item to be searched\n");
    scanf("%d",&key);

    pos=linear(key, a, n);
    if (pos==-1){
        printf("\nItem not found!!\n");
    }else{
        printf("Item found!!\n");
    }
 return 0;
}