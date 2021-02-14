k=int(input())
r=7
f=1
if k%2==0:
    print(-1)
    exit()
for i in range(k):
    if r%k==0:
        print(f)
        exit()
    else:
        r =(r*10+7)%k
        f+=1
print(-1)
