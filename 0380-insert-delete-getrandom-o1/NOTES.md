```
Approach:
​
The order of elements is not important in the data structure. If we use an array as the data structure, insertion at the end will be in O(1) time but searching whether the element is already present in the array will take O(N) time. Removal of the element will require searching for the element which will take O(N) time and left shifting the subsequent array elements will also take O(N) time. Getting random element will take O(1) time using the rand() function. So, we need some additional data structure that allows us to locate the array index for removal and also to search whether the element is already present or not. This data structure should do these tasks in average O(1) time. Hashmap fulfils our requirements.
​
Optimal Solution
​
class RandomizedSet {
// Average Time O(1) & Auxiliary Space O(N)
private:
vector<int> a; // array vector
unordered_map<int,int> m; // Unordered Map does searching, insertion & deletion of element in average O(1) time
public:
/** Initialize your data structure here. */
RandomizedSet() {
// No need to initialise a & m as they are initialised automatically
// to 0 as and when their container size increases.
}
/** Inserts a value to the array vector. Returns true if the array did not already contain the specified element. */
bool insert(int val) {
if(m.find(val)!=m.end())
// If val is not already present in the map, find() function
// returns an iterator(m.end()) pointing to next memory location