class Solution{
    public:
    int larg(int n){
        if(n<2)
        return 0;
        int x=0;
        while((1<<x)<=n){
            x++;
        }
        return (x-1);
    }
    int countSetBits(int n)
    { if(n<=1)
      return n;
        int x=larg(n);
        return (x * pow(2, (x - 1))) + (n - pow(2, x) + 1) + countSetBits(n - pow(2, x));
        


    }
};
