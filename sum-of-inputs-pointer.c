/*
You are given 3 integers a, b and c . Now print the sum of three numbers using the concept of pointer in C.
Sample Input :
10 20 30
Sample Output : 60
*/
//problem - 6
#include<stdio.h>
int main()
{
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);

    int* p = &a, *q = &b, *r = &c;
    sum = *p + *q + *r;

    printf("%d", sum);
    return 0;
}
