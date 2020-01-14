class Solution {
public:
    int reverse(int x) {
        int MAX_VALUE= pow(2,31)-1;
        int MIN_VALUE= -1*pow(2,31);

        int digit=0;
        int remain=x;
        int sum=0;

        while(remain != 0)
        {
            digit=remain%10;
            remain=remain/10;

            if(sum>MAX_VALUE/10 || (sum==MAX_VALUE/10 && digit >7)) return 0;
            if(sum<MIN_VALUE/10 || (sum==MIN_VALUE/10 && digit<-8)) return 0;
            sum = sum*10+ digit;
        }
        return sum;
    }
};
