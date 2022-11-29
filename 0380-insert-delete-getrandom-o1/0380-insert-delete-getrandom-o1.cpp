class RandomizedSet {
    // Average Time O(1) & Auxiliary Space O(N)
private:
    vector<int> a; // array vector
    unordered_map<int,int> m; // Unordered Map does searching, insertion & deletion of element in average O(1) time
public:
    RandomizedSet() {
        // No need to initialise a & m as they are initialised automatically
        // to 0 as and when their container size increases.
    }
    
    bool insert(int val) {
        if(m.find(val)!=m.end())
            return false;
        else{
            a.push_back(val);  // insert val at the end of the array
            m[val]=a.size()-1; // m[key,value] stores the array element 
            return true;
        }
    }
    
    bool remove(int val) {
        if(m.find(val)==m.end()) // val not present in the array vector
            return false;
        else{
            int last=a.back();  // back() fetches last element of the array vector
            a[m[val]]=a.back(); // m[val] locates the index of val in the array vector.
                                // Then we copy array last element value to the val location in the array
            a.pop_back();        // Delete the last element of the array 
            m[last]=m[val];        // In hashmap, assign index of val in array to the index of the last element   
            m.erase(val);        // Delete the val entry from map
            return true;
        }
    }
    
    int getRandom() {
        return a[rand()%a.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

