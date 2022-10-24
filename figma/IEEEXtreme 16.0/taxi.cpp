#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    long long int dist;
    long long int value;
    vector<node*> children;
    node(int d,int v){
        dist=d; 
        value=v;   
    }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<node*> nodes(n+2);
    for(int i=0;i<=n;i++)
    {
        node* temp=new node(0,i);
    }
    for(int i=0;i<m;i++)
        {
            int u,v,dist;
            cin>>u>>v>>dist; 
            //cout<<u<<" "<<v<<endl;
            nodes[u]->children.push_back(nodes[v]);
            nodes[v]->children.push_back(nodes[u]);
        }




    return 0;
}

