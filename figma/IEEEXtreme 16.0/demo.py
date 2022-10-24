value_size=int(input())
key_size=int(input())
matrix_size=[int(x) for x in input().split(',')]
order=1 if input()=='S' else -1

values=[]
for _ in range(value_size):values.append(input())

keys=""
for _ in range(key_size):
    temp=input()
    flag=1
    for i in temp:
        if i=='<':flag=0
        if flag:keys+=i if i!=' ' else '_'
        if i=='>':flag=1
    


keys=keys[:matrix_size[0]*matrix_size[1]]
#print(keys)
for i in values:
    str_len=len(i)
    a,b=0,len(keys)
    if order==-1:a,b=b-1,a-1
    result=[]
    for j in range(str_len):#each character in string i
        flag=1
        for x in range(a,b,order):#x :0->len(keys)
            #print(keys[x],x)
            if i[j]==keys[x]:
                flag=0
                result.extend([1+x//matrix_size[1],1+x%matrix_size[1]])
                break
        if flag:
            result=[0]
            break
    #print(result)
    if(len(result)==1):print("0")
    else:
        for i in result[:-1]:print(i,end=",")
        print(result[-1])

