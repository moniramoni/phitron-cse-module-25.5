/*
Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N . And the next line will contain k . Now find the k-th largest and kth-smallest element from the array.
Implement it using function. And try to implement it using 3 functions .1st one is for sorting , second one for
finding k-th largest element and third one for finding the kth- smallest element.
See the sample output for more clarification.
Note – 1<=k<=N
Sample Input :
9
2 17 1 1 3 2 5 19 5
4

Sample Output :
4th largest element = 5
4th smallest element = 2
*/

// problem -2
#include<stdio.h>
void sortingFunc(int n, int k, int arr[]);
void leargestK(int n, int k, int arr[]);
void smallestK(int n, int k, int arr[]);

int main ()
{
    int n, k, arr[100];
    printf("enter value of n :\n");
    scanf("%d", &n);

    printf("enter n number of elements :\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("enter value of k :\n");
    scanf("%d", &k);

    sortingFunc(n, k, arr);

    return 0;
}

void sortingFunc(int n, int k, int arr[])
{
    int temp, i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    leargestK(n, k, arr);
    smallestK(n, k, arr);
}


void leargestK(int n, int k, int arr[])
{
    int i;
    int l = n-k;
    for(i=n-1; i>=0; i--){
        if(i==l){
            printf("%dth largest element = %d\n", k, arr[i]);
        }
    }
}

void smallestK(int n, int k, int arr[])
{
    int i;
    for(i=0; i<n; i++){
        if( i == k-1 ){
            printf("%dth smallest element = %d\n", k, arr[i]);
        }

    }
}


