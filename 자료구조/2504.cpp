#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int ans,temp,ready, s,m; //소괄호 중괄호
stack<int> stk;
void addparan(char c){
    stk.push(c);
    c == '(' ? s++ : m++;
}
void subparan(char c){
    stk.pop();
    c == ')' ? s-- : m--;  
}

int main(){
    string str; cin>>str;
    for(int i=0;i<str.size();i++){
        if(!stk.empty() && (stk.top()=='(' && str[i]==')' || stk.top()=='[' && str[i]==']') ){
            if(ready){ 
                ans += (pow(2,s) * pow(3,m)); 
                ready=0; 
            }
            subparan(str[i]);
            continue;
        }
        ready=1;
        addparan(str[i]);
    }
    cout<<(stk.empty() ? ans : 0);
}