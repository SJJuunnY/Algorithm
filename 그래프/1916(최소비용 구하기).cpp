#include <iostream>
#include <vector>
#include<queue>

using namespace std;
vector<pair<int,int>> v[1000];
int N, M;
int dist[1001];
bool isvisited[1001];
priority_queue<pair<int,int>> pq;
int start, dest;
void init(){
    for(int i=0;i<1001;i++)
        dist[i]=210000000;
}
void func(){
    pq.push({0,start});

    while(!pq.empty()){
        int distance = -pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if(isvisited[node])
            continue;

        isvisited[node] = true;

        for(auto u : v[node]){
            int newNode = u.second;
            int newDistance = distance + u.first;

            if(dist[newNode] > newDistance){
                dist[newNode] = newDistance;
                pq.push({-newDistance,newNode});
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> M;
    for (int i = 0; i < M; i++){
        int num1, num2, num3;
        cin>>num1>>num2>>num3;
        v[num1].push_back({num3,num2}); //(비용, 노드)
    }
    cin>>start>>dest;

    init();

    func();
    cout<<dist[dest];
}
// 특이사항
// func를 void로 안하고 리턴형을 int로 한 결과 시간초과 에러가 자꾸 나버렸다..
// 컴파일러가 반환값을 찾는 작업을 생략할 수 있다.