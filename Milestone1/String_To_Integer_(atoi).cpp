int myAtoi(string s) {
        int i=0;
        int sign = 0;
        long int num = 0;
        while(i<s.size() && s[i] == ' ')
            i++;
        if(i == s.size())
            return 0;
        if(s[i] == '-')
        {
            sign = 1;
            i++;
        }
        else if(s[i] == '+')
            i++;
        while(s[i] >= '0' && s[i] <='9')
        {
            num = num * 10;
            if(num <= INT_MIN || num >= INT_MAX)
                break;
            num = num + (s[i] - '0');
            i++;
        }
        if(sign == 1)
            num = -1 * num;
        if(num <= INT_MIN)
            return INT_MIN;
        if(num >= INT_MAX)
            return INT_MAX;
        return (int)num;
    }
