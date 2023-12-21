N, M = map(int, input().split())
S = input()

T = 0
t = 0
m = M

for c in S:
    if c == '0':
        m = M
        t = T
    elif c == '1':
        if m > 0:
            m -= 1
        elif t > 0:
            t -= 1
        else:
            T += 1
    else:
        if t > 0:
            t -= 1
        else:
            T += 1

print(T)