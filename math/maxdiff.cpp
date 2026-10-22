
class Solution
{
public:
    int maxDiff(int num)
    {
        int temp = num;
        int maxDigit = -1, minDigit = 10;

        while (temp != 0)
        {
            int d = temp % 10;
            maxDigit = max(maxDigit, d);
            minDigit = min(minDigit, d);
            temp /= 10;
        }

        temp = num;
        int x = -1;
        while (temp != 0)
        {
            int d = temp % 10;
            if (d != 9)
                x = d;
            temp /= 10;
        }

        int a = num;
        if (x != -1)
        {
            int place = 1;
            temp = num;
            a = 0;
            while (temp != 0)
            {
                int d = temp % 10;
                if (d == x)
                    d = 9;
                a += d * place;
                place *= 10;
                temp /= 10;
            }
        }

        temp = num;
        int first = 0;
        while (temp != 0)
        {
            first = temp % 10;
            temp /= 10;
        }

        int y = -1;
        if (first != 1)
        {
            y = first;
        }
        else
        {
            temp = num;
            while (temp != 0)
            {
                int d = temp % 10;
                if (d != 0 && d != 1)
                    y = d;
                temp /= 10;
            }
        }

        int b = num;
        if (y != -1)
        {
            int place = 1;
            temp = num;
            b = 0;
            while (temp != 0)
            {
                int d = temp % 10;
                if (d == y)
                {
                    d = (first != 1) ? 1 : 0;
                }
                b += d * place;
                place *= 10;
                temp /= 10;
            }
        }

        return a - b;
    }
};
