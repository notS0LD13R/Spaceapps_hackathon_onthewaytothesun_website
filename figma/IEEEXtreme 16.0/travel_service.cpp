#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //The first line of input contains an integer t, giving the number of testcases.
//The first line of each test case contains three space-separated integers, s,c,r
//where s is the number of stations on this route, c is the capacity of the fuel tank in litres, and r is the cost of fuel at the origin's station in units per litre.
//The following s lines describe the stations on the route, ending with a station that is located at the destination. 
//The ith line contains two space-separated integers, fi,ri 
//where fi is the amount of fuel needed to travel from the previous station to the ith station in litres and ri is the cost of fuel at the ith station in units per litre.
//Output
//For each testcase, output a single integer that represents the minimum possible cost for the trip.
//If it is not possible to reach the destination, output -1.
//Constraints
//1≤t≤100
//1≤s≤100
//1≤c≤100
//1≤r≤100
//1≤fi≤100
//1≤ri≤100
//Sample Input
//2
//3 10 5
//5 2
//5 3
//5 4
//3 10 5
//5 2
//5 3
//5 5
//Sample Output
//30
//-1
    int t;
    cin>>t;
    while(t--)
    {
        int s,c,r;
        cin>>s>>c>>r;
        vector < pair<int,int> >stations(s);
        for(int i=0;i<s;i++)
        {
            cin>>stations[i].first>>stations[i].second;
        }
        int cost=0,fuel=c;
        cost=c*r;
        //fuel-=stations[0].first;
        for(int i=0;i<s-1;i++)
        {   
            fuel-=stations[i].first;
            //cout<<i+1<<" st\n";
            //cout<<cost<<"c f"<<fuel<<endl;
            if(fuel-stations[i+1].first>=0 && stations[i].second>stations[i+1].second)
            {
                //fuel-=stations[i+1].first;
                //cout<<"fuel="<<fuel<<endl;
                continue;
            }
            else
            {
                int spent = c-fuel;
                cost+=spent*stations[i].second + 500;
                //cout<<spent*stations[i].second + 500<<" jk\n";
                fuel=c;
            }

        }
    

        cout<<cost<<endl;
    }
    return 0;
}