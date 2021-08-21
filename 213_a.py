a, b = map(int, input().split())
for c in range(300):
    if(a^c==b):
        print(c)
