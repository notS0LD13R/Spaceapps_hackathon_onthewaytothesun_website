#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //There is an array of nn integers a_1,a_2,a_3,...,a_n.
    //This array follows m rules. In each rule, you are given three integers l, r, and k, indicating that sum of all elements in the range [l,r] when divided by p returns k.
    //You are given the value of p and the value of m. You need to find an array satisfying all rules.
    //Input
    //The first line contains 3 integers n, m and p, indicating the length of the array, the number of rules and the modulo.
    //The next m lines contain 3 integers l, r and k, indicating the rule.
    //Output
    //Output n integers, the array satisfying all rules. This array must be the lexicographically smallest array out of all arrays satisfying the previous conditions. If there is no solution, output None.
    //Constraints
    //1≤m≤3000
    //1≤l≤r≤n≤100000 
    //p≤1000000007  
    //0≤k<p
    //Sample Input
    //20 5 19
    //2 7 15
    //5 19 0
    //3 6 1
    //6 9 1
    //7 19 17
    //Sample Output
    //0 0 0 18 0 2 14 0 4 0 0 0 0 0 0 0 0 0 18 0
    int n,m,p;
    cin>>n>>m>>p;
    vector<int> a(n,0); 
    vector<vector<int>> rules(m,vector<int>(3));
    for(int i=0;i<m;i++)
    {
        cin>>rules[i][0]>>rules[i][1]>>rules[i][2];
    }
    for(int i=0;i<m;i++)
    {
        int l=rules[i][0]-1;
        int r=rules[i][1]-1;
        int k=rules[i][2];
        int sum=0;
        for(int j=l;j<=r;j++)
        {
            sum+=a[j];
        }
        

       
    }
    return 0;
}