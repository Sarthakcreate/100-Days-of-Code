//GFG POTD
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        long long sum=0;
        for(int i=0;i<n/2;i++){
            sum+=2*(arr[n-i-1]);
            sum-=2*arr[i];
        }
        return sum;
    }
};

//Leetcode Daily Challenge
class Solution {
public:
    string makeFancyString(string s) {
        string result;
        for (char c : s) {
            int n = result.size();
            if (n < 2 || !(result[n - 1] == c && result[n - 2] == c)) {
                result += c;
            }
        }
        return result;
    }
};
