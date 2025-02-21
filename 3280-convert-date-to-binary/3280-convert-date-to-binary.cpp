class Solution 
{
public:

    std::string intToBinary(int x) 
    {
        if (x == 0) 
            return "0";

        std::string res;

        while (x > 0) {
            res += (x % 2) ? '1' : '0';
            x /= 2;
        }
        std::reverse(res.begin(), res.end());
        return res;
    }

    std::string convertDateToBinary(const std::string& date)
    {
        std::string year = date.substr(0, 4);
        std::string month = date.substr(5, 2);
        std::string day = date.substr(8, 2);

        int year_int = std::stoi(year);
        int month_int = std::stoi(month);
        int day_int = std::stoi(day);

        std::string binary_year = intToBinary(year_int);
        std::string binary_month = intToBinary(month_int);
        std::string binary_day = intToBinary(day_int);

        return binary_year + '-' + binary_month + '-' + binary_day;
    }
};