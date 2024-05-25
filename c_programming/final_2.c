#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        long long int mul, a, b, c;
        scanf("%lld %lld %lld %lld", &mul, &a, &b, &c);

        if ((mul) % (a * b * c) != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", mul / (a * b * c));
        }
    }
}