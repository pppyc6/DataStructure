unsigned int Gcd(unsigned int x, unsigned int y)
{
    unsigned int Rem;
    while(y > 0)
    {
        Rem = x % y;
        x = y;
        y = Rem;
    }
    return x;
}