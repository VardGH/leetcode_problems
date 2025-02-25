class Solution
{
public:
    int findCenter(vector<vector<int>>& edges)
    {
        int x = edges[0][0];
        int y = edges[0][1];
        
        return (edges[1][0] == x || edges[1][1] == x) ? x : y;
    }
};
