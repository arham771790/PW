class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n = operations.size();
        int i = 0;
        int sum = 0; 
        for (int i = 0; i < n; i++) {
            if (operations[i] == "+") {
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                int newVal = temp1 + temp2;

                st.push(temp1);
                st.push(newVal);
            } else if (operations[i] == "C") {
                st.pop();
            } else if (operations[i] == "D") {
                int temp = st.top();
                st.push(2 * temp);
            } else {
                st.push(stoi(operations[i]));
            }
        }
        while (st.size() > 0) {
            sum +=st.top();
            st.pop();
        }
        return sum;
    }
};