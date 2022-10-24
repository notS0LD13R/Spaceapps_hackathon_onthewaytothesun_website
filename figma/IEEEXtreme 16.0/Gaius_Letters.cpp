//In order to solve this challenge, you will need to break the code used to encrypt it! The code is a simple substitution cipher, where each letter is replaced by another letter. The key is the order of the letters in the alphabet. For example, if the key is "ZYXWVUTSRQPONMLKJIHGFEDCBA", then A becomes Z, B becomes Y, C becomes X, and so on. The key is always 26 letters long, and contains every letter of the alphabet exactly once.
//example
//U iuxx nq mf ftq eqzmfq fapmk fa tqmd m bqfufuaz rday Fuxxuge. Omeeuge mzp Ndgfge tmhq nqqz mofuzs efdmzsq. Etagxp nq nmow uz fuyq rad puzzqd.
//I will be at the senate today to hear a petition from Tillius. Cassius and Brutus have been acting strange. Should be back in time for dinner.
//a=m, b=n, c=o, d=p, e=q, f=r, g=s, h=t, i=u, j=v, k=w, l=x, m=y, n=z, o=a, p=b, q=c, r=d, s=e, t=f, u=g, v=h, w=i, x=j, y=k, z=l
//write a program that will decrypt the message using the above key.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //char one='a',two='o';
    //cout<<one-two;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i]))
        {
            //cout<<(int)s[i]<<s[i]<<endl;
            if(s[i]>='a'&&s[i]<='l')
            {
                s[i]=s[i]+14;
            }
            else if(s[i]>='m'&&s[i]<='z')
            {
                s[i]=s[i]-12;
            }
            else if(s[i]>='A'&&s[i]<='L')
            {
                s[i]=s[i]+14;
            }
            else if(s[i]>='M'&&s[i]<='Z')
            {
                s[i]=s[i]-12;
            }
        }
    }
    cout<<s;
    return 0;
}


