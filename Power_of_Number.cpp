public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       long long res = 1 ;
       long long n = pow(10,9)+7;
        while(R>0)
        {
            if(R&1)
            {
              res = (res%n * N%n )%n;  
            }
            N = (N%n * N%n)%n;
            R = R >> 1 ;

        }
        return res;
        
    }
