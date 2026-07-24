#include <iostream>
class Solution
{
public:
    vector<int> scoreValidator(vector<string> &events)
    {

        int total_sc = 0, cnter = 0;
        for (int i = 0; i < events.size(); i++)
        {
            if (events[i] == "0" || events[i] == "1" || events[i] == "2" || events[i] == "3" || events[i] == "4" || events[i] == "6")
            {
                total_sc = total_sc + stoi(events[i]);
            }
            else if (events[i] == "W")
            {
                cnter++;
                if (cnter == 10)
                {
                    break;
                }
            }
            else if (events[i] == "WD" || events[i] == "NB")
            {
                total_sc = total_sc + 1;
            }
        }
        return {total_sc, cnter};
    }
};