#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int N,M,count=0;
    cin>>N>>M;
    vector<string> n;
    vector<string> m;

    for(int i=0;i<N;i++){
        string temp;
        cin>>temp;
        n.push_back(temp);
    }
    
    for(int i=0;i<M;i++){
        string temp;
        cin>>temp;
        m.push_back(temp);
    }

    for(int i=0;i<M;i++)   //M개 중에서 N개 매칭 ㄱㄱ
        for(int j=0;j<N;j++){
            if(m[i].find(n[j])!=string::npos) //찾는게 있다면
                count++;
        }
    cout<<count;
}