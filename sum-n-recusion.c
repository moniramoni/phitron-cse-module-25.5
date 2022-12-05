
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
