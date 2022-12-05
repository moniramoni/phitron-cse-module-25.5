/*
You are given an integer n . Now print n to 1 . Implement it using recursion.
Sample Input : 4
Sample Output : 4 3 2 1
*/
//problem -4
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
