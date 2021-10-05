class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> q;
        long sum = 0;
        
        for (auto num : target) {
            q.push(num);
            sum += num;
        }
        
        while (!q.empty()) {
            int curr_max = q.top();
            q.pop();
            if (curr_max == 1) return true;

            long rest = sum - curr_max;
            
            if (rest == 0) return false;
            if (rest == 1) return true;
            if(rest >= curr_max) return false;

            rest = curr_max % rest;
            if (rest == 0) return false;
            
            sum -= (curr_max - rest);
            q.push(rest);

        }
        return true;
    }
};
