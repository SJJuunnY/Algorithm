#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<int> v[100001];
queue<int>  q;
bool isvisited[100001];
int parent[100001];

void bfs(){

}
int main(){
    int N; cin>>N;
    for(int i=0;i<N-1;i++){
        int num1, num2; cin>>num1>>num2;
        v[num1].push_back(num2);
        v[num2].push_back(num1);
    }   
    q.push(1);

    while(!q.empty()){
        int node = q.front(); q.pop();
        if(isvisited[node])
            continue;
        isvisited[node]=true;
        for(auto u : v[node]){
            if(!isvisited[u]){
                parent[u] = node;
                q.push(u);
            }
        }
    }
    for(int i=2;i<=N;i++)
        cout<<parent[i]<<'\n';
}