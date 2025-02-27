class Solution
{
public:
    string interpret(string command)
    {
        std::string res;
        for (int i = 0; i < command.size(); ++i) {
            if (command[i] == 'G') {
                res += 'G';
            } else if (command[i] == '(' && command[i + 1] == ')') {
                res += 'o';
                ++i;
            } else if (command[i] == '(' && command[i + 1] == 'a') {
                res += "al";
                ++i;
            }
        }
        return res;
    }
};
