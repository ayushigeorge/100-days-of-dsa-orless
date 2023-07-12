class Solution{
public:
if (R == 0)
      return 1;
    if (R == 1)
      return N;
    long long temp = power(N, R / 2);
    if (R % 2 == 0)
      return (temp * temp) % 1000000007;
    else
      return (((temp * temp) % 1000000007) * N) % 1000000007;
}
};
