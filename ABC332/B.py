K, G, M = map(int, input().split())

s = 0
r = 0

for i in range(K):
    if s == G:
        s = 0
    elif r == 0:
        r = M
    else:
        if G - s < r:
            r = r - (G - s)
            s = G
        else:
            s = s + r
            r = 0

print(s, r)