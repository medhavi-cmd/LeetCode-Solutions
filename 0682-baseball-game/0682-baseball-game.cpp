class Solution {
public:
    int calPoints(vector<string>& operations) {
       vector<int> st;
       

       for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "C"){
                st.pop_back();
            }
            else if(operations[i] == "D"){
                int x = st.back();
                st.push_back(x*2);
            }
            else if(operations[i] == "+"){
                int n =st.size();
                int x = st[n-1];
                int y = st[n-2];
                st.push_back(x+y);
            }
            else{
                st.push_back(stoi(operations[i]));
            }
       }

       int sum = 0;
       for(int i = 0; i<st.size(); i++){
        sum += st[i];
       }
       return sum;
        
    }
};