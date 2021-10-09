int power( int a, int b)
{
     int p = 1;
     int N = 1e9 + 7;;
     while (b > 0)
     {
          if (b & 1)
               p = (p % N * a % N) % N;
          a = (a % N * a % N) % N;
          b >>= 1;
     }
     return p;
}
