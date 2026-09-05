class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operating;
        for(auto i:tokens){
            if(i=="+" || i=="-" || i=="*" || i=="/"){
                int b=operating.top();
                operating.pop();
                int a=operating.top();
                operating.pop();
                switch (i[0]) {
                    case '+': 
                        operating.push(a + b); 
                        break;
                    case '-': 
                        operating.push(a - b); 
                        break;
                    case '*':
                        operating.push(a * b); 
                        break;
                    case '/': 
                        operating.push(a / b); 
                        break;
                }  
            }
            else{
                operating.push(stoi(i));
            }
        }
        return operating.top();
    }
};