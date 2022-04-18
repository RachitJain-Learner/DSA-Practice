class Solution {
public:
    int startPosition(vector<int>& nums, int s, int e, int target){
        int num = -1;
        
        while(s<=e){
            int mid = s + (e-s)/2 ;
            
            if(nums[mid] == target){
                num = mid ;
                e = mid - 1 ;
            }
            else if(nums[mid] < target)
                s = mid + 1 ;
            else 
                e = mid - 1 ;  
        }
        return num ;
    }
    
    int endPosition(vector<int>& nums, int s, int e, int target){
        int num = -1 ;
        
        while(s<=e){
            int mid = s + (e-s)/2 ;
            
            if(nums[mid] == target){
                num = mid ;
                s = mid + 1 ;
            }
            else if(nums[mid] < target)
                s = mid + 1 ;
            else 
                e = mid - 1 ;  
        }
        return num ;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        // vector<int> ans(2) ; without declaring vector ans is given***
        
        if(nums.size() == 0)
            return {-1,-1} ;
        
        int s= 0 ;
        int e= nums.size()-1 ;
        
        int first = startPosition(nums, s, e, target) ;
        
        int last = endPosition(nums, s, e, target) ;
        
        return {first , last} ;
    }
};