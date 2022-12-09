x=list(map(int,input().split()))
icount=0
for i in range(5):    
    icount+=x[i]%3
    m=x[i]//3
    x[i]=m
    x[i-1]+=m
    x[(i+1)%5]+=m
for i in range(5): 
    print(x[i],end=" ")
print()
print(icount)