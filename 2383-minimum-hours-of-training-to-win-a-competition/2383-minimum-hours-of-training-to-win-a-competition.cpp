class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int ans1 = 0 , ans2 = 0 ;
        
        int sum = accumulate(energy.begin(), energy.end(), 0);
        
        ans1 = (sum >= initialEnergy)? sum - initialEnergy + 1 : 0 ;
        
        for(int i=0 ; i < experience.size() ; i++){
            if(initialExperience > experience[i]){
                initialExperience += experience[i] ;
            }
            else{
                ans2 = experience[i] - initialExperience + 1 ;
                initialExperience += experience[i] + ans2 ;
                ans1 += ans2 ;
            }
        }
        return ans1 ; 
    }
};