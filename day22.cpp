class Solution
{
public:
    /*You are required to complete this method*/
    int maxChainLen(struct val p[], int n)
    {
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i].first = p[i].first;
            arr[i].second = p[i].second;
        }

        sort(arr.begin(), arr.end(), [](pair<int, int> p1, pair<int, int> p2)
             { return p1.second < p2.second; });

        vector<pair<int, int>> helper;
        helper.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            if (helper.back().second < arr[i].first)
            {
                helper.push_back(arr[i]);
            }
        }

        return helper.size();
    }
};
