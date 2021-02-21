a,b,c = map(int, input().split())
a=a%10
if a==0:
    print(0)
    exit()
elif a==1:
    print(1)
    exit()
elif a==2 or a==3 or a==7 or a==8:
    g=4
elif a==4 or a==9:
    g=2
elif a==5:
    print(5)
    exit()
elif a==6:
    print(6)
    exit()

b2=b%g
if b2==0:
    c=1
elif b2==1:
    c=1
elif b2==2 or b2==3 or b2==7 or b2==8:
    g2=4
elif b2==4 or b2==9:
    g2=2
elif b2==5:
    c=1
elif b2==6:
    c=1


k=(b%g)**(c%g)%g
if(k==0):
    k=g
ans = (a**k)%10
print(ans)
