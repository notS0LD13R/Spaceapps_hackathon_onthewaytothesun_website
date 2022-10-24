#include <bits/stdc++.h>
using namespace std;
long long int a;

class node{
    public:
    long long int weight;
    long long int value;
    vector<node*> children;
    node(int d,int v){
        weight=d; 
        value=v;   
    }
};

void DFS(vector<node*> nodes,bool vis[],int x,int y,int n,vector<int> stack,vector<int> cpy)
{
    //cout<<"DFS "<<x<<"=x"<<endl;
    stack.push_back(x);
    //cout<<"hello"<<x;
    if (x == y) {
        // print the path and return on
        // reaching the destination node
        //cout<<"reached\n";
       long long int prod=nodes[stack[0]]->weight;
        //cout<<prod<<" ";
        for(int i=1;i<stack.size();i++)
                {
                    prod=prod*nodes[stack[i]]->weight;
                    //cout<<" "<<nodes[stack[i]]->weight<<" ";
                    
                }
                a=prod;
        
        return ;
    }
    //cout<<"visiting "<<x<<"  "<<nodes[x]->children.empty()<<endl;
    vis[x] = true;
    // if backtracking is taking place
    // then pop the last element
    if(!nodes[x]->children.empty())
    {
        for(int j=0;j<nodes[x]->children.size();j++)
        {
            //cout<<x<<"<--child "<<nodes[x]->children[j]->value<<" ind \n";
            if(vis[nodes[x]->children[j]->value]==false){
                //cout<<"called "<<nodes[x]->children[j]->value<<endl;
                DFS(nodes,vis,nodes[x]->children[j]->value,y,n,stack,cpy);
            }
        }
    }
    //cout<<"pop "<<x<<endl;
    stack.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //number of nodes in tree
        vector<node*> nodes(n+2);
        
        for(int i=1;i<=n;i++)
        {
            int d;
            cin>>d;
            nodes[i]=new node(d,i);
        }
        for(int i=1;i<n;i++)
        {
            int u,v;
            cin>>u>>v; 
            //cout<<u<<" "<<v<<endl;
            nodes[u]->children.push_back(nodes[v]);
            nodes[v]->children.push_back(nodes[u]);
        }
        //output the tree as a figure
        //for each node, output its weight and its children's weights
        /*for(int i=1;i<=n;i++)
        {
            cout<<nodes[i]->value<<"- ";
            for(int j=0;j<nodes[i]->children.size();j++)
            {
                cout<<nodes[i]->children[j]->value<<" ";
            }
            cout<<endl;
        }*/
        int q;
        cin>>q;
        while(q--)
        {
            int t,u,v;
            cin>>t>>u>>v;
            vector<int> stack,cpy;
            bool visited[n+1]={false};
            if(t==1)
            {
                nodes[u]->weight=v;
            }
            else if(t==2)
            {
                
                long long int ans=0;
                //cout<<u<<"<-->"<<v<<endl;
                visited[u]=true;
                DFS(nodes, visited, u, v, n, stack, cpy);
                ans=a%1000000007;
                a=0;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}