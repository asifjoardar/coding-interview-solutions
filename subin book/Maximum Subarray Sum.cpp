//leetcode 53. Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int ans=INT_MIN,sum=0,i;
        for(i=0;i<a.size();i++){
            sum+=a[i];
            ans=max(ans,sum);
            if(sum<0)
                sum=0;
        }
        return ans;
    }
};
