class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, const int& k) {
        unordered_map<string, int> m;
        priority_queue<pair<int, string>, vector<pair<int, string> >, Comp> q;
        
        for (const string& word : words)
            ++m[word];
        
        for (auto w : m)
        {
            q.push(make_pair(w.second, w.first));
            if (q.size() > k)
                q.pop();
        }
        
        vector<string> ans(q.size());
        
        for (auto it = ans.rbegin(); it != ans.rend(); ++it)
            *it = q.top().second, q.pop();
        
        return ans;
    }
    
private:
    class Comp
    {
    public:
        bool operator()(const pair<int, string>& p1, const pair<int, string>& p2)
        {
            return p1.first == p2.first ? p1.second < p2.second : p1.first > p2.first;
        }
    };
};
