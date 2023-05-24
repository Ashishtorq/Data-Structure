class Solution {
public:
    int search(vector<int>& nums, int target) {
       // int n=nums.size()-1;
        int s=0;
        int e=nums.size()-1;
        // int mid=(s+e)/2;
        int mid ;
        while(s<=e)
       
        {

            mid = (s+e)/2 ;
        
           if(nums[mid]==target) return mid ;
           if(nums[mid]>=nums[s]){
               if(nums[s]<=target&&nums[mid]>=target){
                   e = mid-1 ;
               }
               else s = mid+1 ;
           }
           else {
               if(nums[e]>=target&&nums[mid]<=target){
                   s=  mid+1 ;
               }
               else e = mid-1 ;
           }
           cout<<s<<" "<<e<<endl;
        }
        return -1;
    
    }
};