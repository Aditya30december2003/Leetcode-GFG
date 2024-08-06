class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       queue<int>q;
       for(int i=0;i<tickets.size();i++){
        q.push(i);
       }
       int time=0;
       while(tickets[k]){
        tickets[q.front()]--;
       if(tickets[q.front()]>0){
        q.push(q.front());
        q.pop();
       }
       else{
        q.pop();
       }
       time++;
       }
       return time;
    }
};