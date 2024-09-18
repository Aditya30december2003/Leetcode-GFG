class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;  // Stack to store the surviving asteroids
        
        for(int x : asteroids) {
            bool destroyed = false;
            
            while(!stk.empty() && stk.top() > 0 && x < 0) {  // Collision scenario
                if(stk.top() < -x) {  // The top asteroid is smaller and will be destroyed
                    stk.pop();
                } else if(stk.top() == -x) {  // Both asteroids are of equal size, both destroyed
                    stk.pop();
                    destroyed = true;
                    break;
                } else {  // The top asteroid is larger and will survive
                    destroyed = true;
                    break;
                }
            }
            
            if(!destroyed) {
                stk.push(x);  // Only push the asteroid if it hasn't been destroyed
            }
        }
        
        vector<int> ans;
        while(!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
