import math
t=int(input())
for i in range(t):
    dict={}
    n=int(input())
    for i in range(n):
        a=input().split()
        if a[0] in dict:
            dict[a[0]]+=int(a[1])
        else:
            dict[a[0]]=int(a[1])
        for i in a[2:]:
            if i in dict:
                dict[i]-=1
            else:
                dict[i]=-1
    #take sum of positive values in dict
    sum,day,n,p=0,0,0,0
    neg={}
    pos={}
    for i in dict:
        if dict[i]<0:
            sum+=-1*dict[i]
            neg[i]=dict[i]
            n+=1
        else:
            pos[i]=dict[i]
            p+=1
    max=0
    for i in pos:
        if pos[i]>max:
            max=pos[i]

    print(sum,max)
    #print(dict)



    