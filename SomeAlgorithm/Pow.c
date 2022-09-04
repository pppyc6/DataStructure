#include <stdbool.h>
bool IsEven(unsigned int x);
long int Pow(long int x, unsigned int n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return x;
    if(IsEven(n))
        return Pow(x * x, n / 2);
    else
        return Pow(x * x, n / 2) * x;
}

bool IsEven(unsigned int x)
{
    if(x % 2 == 0)
        return true;
    else
        return false;
}