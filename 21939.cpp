#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool comp(pair<int,int> a, pair<int,int> b){ //페이지랑 우선순위 큰게 앞으로 오도록
    if(a.second==b.second) //우선순위 같으면 큰 페이지 먼저
        return a.first > b.first; 
    return a.second > b.second; //우선순위 큰게 앞으로 
}
void printcheck(map<int,int> m){
    for(auto u : m){
        cout<<u.first<<" "<<u.second<<'\n';
    }
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,M; cin>>N;
    unordered_map<int,int> m;
    for(int i=0;i<N;i++){
        int num, lev; cin>>num>>lev;
        m[num]=lev;
    }
    cin>>M;
    for(int i=0;i<M;i++){
        string str; cin>>str;
        if(str=="add"){
            int num,lev; cin>>num>>lev;
            m[num]=lev;
        }
        if(str=="recommend"){
            int num; cin>>num;
            vector<pair<int,int>> v(m.begin(),m.end());
            sort(v.begin(), v.end(),comp); //2번쨰 원소 기준으로 정렬띠
                                            // 19998 78
                                            // 1402 59
                                            // 2042 55
                                            // 2667 37
                                            // 1001 2
                                            // 1000 1
            if(num==1)
                cout<<v[0].first<<"\n";
            else
                cout<<v[v.size()-1].first<<'\n';
        }
        if(str=="solved"){
            int num; cin>>num;
            m.erase(num);
        }
    }
}