#include <iostream>  
#include <string>  
#include <vector>  
#include <sstream>  
using namespace std;


class Pair{
    public:
    string name;
    int money;
    
    Pair(string x,int y){
        name=x;
        money=y;
    }

    void print(){
        cout<<'('<<name<<','<<money<<")\n";
    }
};

int main()
{

int budget;
cin>>budget;

vector <int> team_size;
vector <vector <Pair>> team;

for(int j=0;j<5;j++){
    int tempsize;
    vector <Pair> tempteam;
    cin>>tempsize;
    team_size.push_back(tempsize);
    for(int i=0;i<tempsize;i++){
        string tempname;
        int tempmoney;
        cin>>tempname>>tempmoney;
        Pair p(tempname,tempmoney);
        tempteam.push_back(p);
    }
    team.push_back(tempteam);
}

int maxbudget=0;
string maxnames="}";
if(team_size[0]>1 && team_size[1]>1 && team_size[2]>1 && team_size[3]>1 && team_size[4]>1)
{
for(auto a:team[0]){
    for(auto b:team[1]){
        for(auto c:team[2]){
            for(auto d:team[3]){
                for(auto e:team[4]){
                    int currbudget=a.money+b.money+c.money+d.money+e.money;
                    if((currbudget>maxbudget) && (currbudget<budget)){
                        maxbudget=currbudget;
                        maxnames=a.name+" "+
                                 b.name+" "+
                                 c.name+" "+
                                 d.name+" "+
                                 e.name;
                    }
                    else if(currbudget==maxbudget){
                        string currname=a.name+" "+
                                 b.name+" "+
                                 c.name+" "+
                                 d.name+" "+
                                 e.name;
                        if (currname<maxnames){
                            maxbudget=currbudget;
                            maxnames=currname;
                        }
                    }
                }
            }
        }
    }
}
}

if(team_size[0]>1 && team_size[1]>1 && team_size[2]>1 && team_size[3]>1 && team_size[4]>1)



for(int i=0;i<maxnames.length();i++){
    //cout<<i<<" ";
    if(maxnames[i]==' ')
        cout<<'\n';
    else
        cout<<maxnames[i];
}
return 0;
}