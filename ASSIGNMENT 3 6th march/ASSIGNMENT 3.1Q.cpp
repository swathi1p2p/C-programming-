#include <stdio.h>

int isPrime(int num);

int main()
{
    int low, high, i, flag;

    printf("Enter two positive integers: ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    for(i=low+1; i<high; ++i)
    {
        // flag will be 1 if the number is prime
        flag = isPrime(i);

        if(flag == 1)
            printf("%d ",i);
    }

    return 0;
}

// Function to check prime number
int isPrime(int num)
{
    int j;

    for(j=2; j<=num/2; ++j)
    {
        if(num % j == 0)
        {
            return 0;
        }
    }

    return 1;
}