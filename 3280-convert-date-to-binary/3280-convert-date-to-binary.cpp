class Solution {
public:

  string toBinary(int num) {
        if (num == 0) return "0";

        string ans = "";
        while (num > 0) {
            ans += (num % 2) + '0';
            num /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(day);
    }
};