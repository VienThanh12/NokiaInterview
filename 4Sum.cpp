class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        set<vector<int>> set;
        long n = nums.size();
        long first, second, mid, sum, ans, i, j, k;
        for(i = 0; i < n - 3; i++){
            for(j = i + 1; j < n - 2; j++){
                for(k = j + 1; k < n - 1; k++){
                    first = k + 1;
                    second = n - 1;
                    mid = (first + second) / 2;
                    sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k];
                    ans = target - sum;
                    while(first <= second){
                        mid = (first + second) / 2;
                        if(ans > nums[mid]){
                            first = mid + 1;
                        }
                        else if(ans < nums[mid]){
                            second = mid - 1;
                        }
                        else if(ans == nums[mid]){
                            //cout << i << " " << j << " " << k << " " << mid << endl;
                            set.insert({nums[i], nums[j], nums[k], nums[mid]});
                            break;
                        }
                    }
                }
            }
        }
        for(auto it : set){
            res.push_back(it);
        }
        return res;
    }
};
