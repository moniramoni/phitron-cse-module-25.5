/*
You are given a positive integer n. The second line will contain n positive integers. The third line will contain a value k.
Now print the total count of strictly less and strictly greater value from k. Implement it using function.
Note – In the given input, there may exist duplicate value.
Sample Input :
7
1 2 5 5 9 2 3
5
Sample Output : 5
*/

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

