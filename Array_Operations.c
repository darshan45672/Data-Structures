/* Program demonstarting Some Array operations */

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void createArray(int a[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
}

void displayArray(int a[], int n){
    for (int i = 0; i < n; i++)  {
        printf("%d\t", a[i]);
    }
}

int insertAtPosition( int item, int a[], int n, int pos){
    if(pos>n  || pos<0){
        printf("Invalid Position\n");
        return n;
    }

    for(int i= n-1; i>=pos; i--){
        a[i+1]= a[i];
    }

    a[pos] = item;

  return n+1;
}

int deleteAtPosition(int a[], int pos,int n){
    if(pos>n  || pos<0){
        printf("Invalid Position\n");
        return n;
    }

    printf("Item deleted is %d", a[pos]);

    for (int i = pos + 1; i < n; i++){
        a[i-1] = a[i];
    }

  return n-1;
}

int main(void){
    int choice, a[10],n,item,pos;
    for(;;){
        printf("1. Create an array\t\t2. Display\n3.Insert at position\t\t4. Delete at position\n5.Exit\n\nEnter your choice:");
        scanf("%d",&choice);

        switch (choice){
        case 1:{
            printf("Enter the number of elements\n");
            scanf("%d",&n);
            printf("Enter %d elements:\n",n);
            createArray(a,n);
        }
            break;
        case 2:{
            printf("The contents of the array are\n");
            displayArray(a,n);
        }
            break;
        case 3:{
            printf("Enter the item to be inserted: ");
            scanf("%d", &item);
            printf("Enter the position: ");
            scanf("%d", &pos);
            n=insertAtPosition(item,a,n,pos);
        }
            break;
        case 4:{
            printf("Enter the position: ");
            scanf("%d",&pos);
            n = deleteAtPosition(a,pos,n);
        }
            break;
        case 5: exit(0);
            break;
        default: printf("Invalid choice !!");
            break;
        }
    }
  return 0;
}