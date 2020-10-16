// Algo time
/* Initially mark all node as non visited 
then visit that node and push it into the stack.
and marked as visited 

3. while stack is not empty 
   pop the nodes from stack 
   and explore its neighbour nodes 
   if not visited then push and mark as visited
   
   
   
   source :~ hackerearth
   DFS-iterative (G, s):                                   //Where G is graph and s is source vertex
      let S be stack
      S.push( s )            //Inserting s in stack 
      mark s as visited.
      while ( S is not empty):
          //Pop a vertex from stack to visit next
          v  =  S.top( )
         S.pop( )
         //Push all the neighbours of v in stack that are not visited   
        for all neighbours w of v in Graph G:
            if w is not visited :
                     S.push( w )         
                    mark w as visited


    DFS-recursive(G, s):
        mark s as visited
        for all neighbours w of s in Graph G:
            if w is not visited:
                DFS-recursive(G, w)


                coursera is also algorithm graph course save note
   
    **/
/*****
 * 
 * 
 * 
 * 
 *     Worng code below and below you willl find the correct implemnetation from hackerearth *****/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addlst(vector<int>a[] ,int u,int v){

    a[u].push_back(v);
    a[v].push_back(u);
}


void dfs(int u,vector<bool>& visited){
stack<int> st;
st.push(u);
visited[u]= true;
int v;

while(!st.empty()){
v= st.top();
st.pop();

for(int i=0;i<v;i++){

    if(visited[a[u][i]]== false)

    st.push(a[u][i]);
    visited[a[u][i]]= true;


}
}

}




void initialize(vector<bool>& visited){

    for(int i=0;i<visited.size();i++){

        visited[i]= false;
    }
}





int main(){

        int v=8;
   
   vector<int>*a= new vector<int> [v];
   addlst(a, 0, 1); 
    addlst(a, 0, 4); 
    addlst(a, 1, 2); 
    addlst(a, 1, 3); 
    addlst(a, 1, 4); 
    addlst(a, 2, 3); 
    addlst(a, 3, 4);

    vector<bool> visited(10);
    initialize(visited);
    for(int i=0;i<v;i++){
  dfs(a,visited);
}
return 0;
}









