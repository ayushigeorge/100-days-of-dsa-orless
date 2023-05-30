class Solution {
public:
    bool checkPrime(int n)

    {

        

        for(int i=2; i<=sqrt(n); i++)

        {

            if(n%i == 0 )

            {

                return 0;

            }

        }

        

        return 1;

    }

    

    string isSumOfTwo(int N){

        // code here

        

        for(int i=2; i<N; i++)

        {

            if(checkPrime(N-i) && checkPrime(i))

            {

                return "Yes";

            }

        }
