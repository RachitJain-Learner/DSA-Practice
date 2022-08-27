class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int hours = 0 , diff = 0 ;
        
        int energySum = accumulate(energy.begin(), energy.end(), 0);
        
        if(energySum >= initialEnergy) 
            hours = energySum - initialEnergy + 1 ;
        
        for(int i=0 ; i < experience.size() ; i++){
            
            if(initialExperience > experience[i])
                initialExperience += experience[i] ;
            
            else{
                diff = experience[i] - initialExperience + 1 ;
                initialExperience += experience[i] + diff ;
                hours += diff ;
            }
        }
        return hours ; 
    }
};