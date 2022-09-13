class Solution {
public:

int subarrayWithAtMostKDistinct(vector<int> &nums,int k) {
int i=0,j=0,count=0,n=nums.size();
vector freq(n+1,0);
int total = 0;

    while(j<nums.size()){
        if(freq[nums[j]]==0)count++;
        freq[nums[j]]++;
        if(count <= k){
            total += (j-i+1);
            j++;
        }
        else {
            while(count > k){
                freq[nums[i]]--;
                if(freq[nums[i]] == 0)
                {
                    count--;
                }
                i++;
            }
             total+=(j-i+1);
            
            j++;
        }
    }
    
    return total;
}
int subarraysWithKDistinct(vector<int>& nums, int k) {
    cout<< subarrayWithAtMostKDistinct(nums,k) <<" "<< subarrayWithAtMostKDistinct(nums,k-1);
    return subarrayWithAtMostKDistinct(nums,k) - subarrayWithAtMostKDistinct(nums,k-1);
}
};