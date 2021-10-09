int result[1000] = {0};
int fact(int n)
{
    if (result[n] != 0)
        return result[n];
    else
    {
        result[0] = 1;
        for (int i = 1; i <= n; ++i)
        {
            result[i] = i * result[i - 1];
        }
        return result[n];
    }
}
