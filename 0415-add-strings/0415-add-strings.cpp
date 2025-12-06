class Solution {
public:
    string addStrings(string num1, string num2) {
       string ans;
       int index1=num1.size()-1,index2=num2.size()-1;
       int sum,carry=0;
       while(index2>=0||index1>=0)
       {
       
            int d1 = (index1 >= 0 ? num1[index1] - '0' : 0);
            int d2 = (index2 >= 0 ? num2[index2] - '0' : 0);

            sum = d1 + d2 + carry;
            carry = sum / 10;
       char c = '0' + (sum % 10);
       ans+=c;
        index2--;
        index1--;
       }
       if (carry) ans += (carry + '0');

        reverse(ans.begin(), ans.end());
        return ans;
    }
};