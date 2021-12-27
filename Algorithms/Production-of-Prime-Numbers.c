#include <stdio.h>
int IsPrimeNumber(int num)
{
    int bPrime = 1;
    int factor = num / 2;
    int i = 0;

    for (i = 2; i <= factor; i++)

    {
        if ((num % i) == 0)
            bPrime = 0;
    }

    return bPrime;
}

void GeneratePrimeNumbers(int max)
{
    int i = 0;

    int dispctr = 0;

    printf("All the prime numbers under %d are given below:\n".max);
    for (i = 2; i <= max; i++)

    {
        if (IsPrimeNumber(i) == 1)

        {
            printf("%d\t", i);
            dispctr = dispctr + 1;

            if (dispctr >= 6)

            {
                printf("\n");
                dispctr = 0;
            }
        }
    }
    printf("\n");
}
int main()
{
    GeneratePrimeNumbers(1000);
    return 0;
}