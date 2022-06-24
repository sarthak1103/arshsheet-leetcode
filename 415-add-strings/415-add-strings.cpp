class Solution {
public:
   string addStrings(string num1, string num2)
        {
            string result = "";

            int i = num1.length() - 1, j = num2.length() - 1;
            int c = 0;
            while (i >= 0 or j >= 0 or c > 0)
            {
                int sum = c;
                if (i >= 0)
                {
                    sum += (num1[i--] - '0');
                }
                if (j >= 0)
                {
                    sum += (num2[j--] - '0');
                }

                c = sum / 10;
                result += (sum % 10 + '0');
            }
            reverse(result.begin(), result.end());
            return result;
        }
};