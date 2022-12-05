/*
// problem -1 (done)
#include<stdio.h>
int main()
{
    int n, k, arr[100], count = 0;
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    printf("Enter the n number of elements : \n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of k : \n");
    scanf("%d", &k);

    for(int i=0; i<n; i++){
       if(arr[i]>k || arr[i]<k)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
*/



/*
// problem -2 Done
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
*/




//problem -3
#include<stdio.h>
int main()
{

    return 0;
}





/*
// You are given an integer n . Now print n to 1 . Implement it using recursion.
//problem -4 Done
#include<stdio.h>
void nPrint(int n)
{
    if(n==1){
        printf("%d ", n);
        return;
    }
    printf("%d ", n);
    nPrint(n-1);
}
int main ()
{
    int n;
    scanf("%d", &n);
    nPrint(n);
    return 0;
}
*/



/*
//problem - 6
#include<stdio.h>
int main()
{
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);

    int* p, *q, *r;
    p = &a;
    q = &b;
    r = &c;
    sum = *p + *q + *r;
    printf("%d", sum);
    return 0;
}
*/



/*
//problem -5 done
#include<stdio.h>
int sum(int n)
{
    if(n>0){
        return n+sum(n-1);
    }
    else
        return 0;
}
int main ()
{
    int n;
    scanf("%d", &n);
    int r = sum(n);
    printf("%d\n", r);
    return 0;
}
*/





//problem no - 3


































