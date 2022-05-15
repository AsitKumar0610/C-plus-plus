#include <bits/stdc++.h>

using namespace std;

int const N = 10;
int visited[N];
vector<int> v[N];

/*void BFS(int i){

    queue<int> q;//c++ stl queue initialized here
    cout<<i<<" ";//print the very first vertex visited
    visited[i] = 1;//mark the very first vertex as visited
    q.push(i);//insert the very first vertex in queue

    while(!q.empty()){//as far as there is a vertex value in queue, go on
        i = q.front();//retrieve vertex value from queue
        q.pop();//delete that vertex value from queue
        for(auto n : v[i]){//if vertex 1 is poped from queue, then we are dealing with all vertexes connected to vertex 1 in this pass
            if(visited[n] != 1){//if the vertex has not yet been visited, go on
                cout<<n<<" ";//print vertex
                visited[n] = 1;//mark vertex as visited
                q.push(n);//insert vertex value to queue
            }
        }
    }
}*/

//DFS implemented with this simple recursive function
//dfs requires stack and recursive calls uses stack,
//hence the decision to use a recursive function
void DFS(int i){
    if(visited[i])//first check if this node has been visited before
        return;//if visited, return to the calling function i.e backtrack
    cout<<i<<" ";//print node's value
    visited[i] = 1;//mark node as visited
    for(auto x : v[i])//retrieve adjacent nodes to the last visited node
        DFS(x);//pick the first of the adjacent node to be retrieve and repeat the process
}

int main()
{
    //store vertex and edges in adjacency list
    //vertex 1 is connected to vertex 2, hence
    //the code v[1].push_back(2);
    //vertex 1 is also connected to vertex 4, hence
    //the code v[1].push_back(4);
    //now you should get the idea of what i am
    //doing here
    v[1].push_back(2);
    v[1].push_back(4);
    v[2].push_back(1);
    v[2].push_back(3);
    v[2].push_back(5);
    v[3].push_back(2);
    v[3].push_back(6);
    v[5].push_back(2);
    v[5].push_back(6);
    v[6].push_back(3);
    v[6].push_back(5);
    v[4].push_back(1);

    /*BFS(3);//you can start with any vertex, i am starting with 3

    cout<<"\n\n";

    //reset visited[N]
    for(int i=0;i<N;i++)
         visited[i] = 0;//reset all elements to 0*/

    DFS(2);//you can start with any vertex, i am starting with 2
}
