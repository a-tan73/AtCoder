N, S, K = map(int, input().split())
P = [list(map(int, input().split())) for _ in range(N)]

sum = 0

for i in range(N):
    sum += P[i][0] * P[i][1]

if sum < S:
    sum += K

print(sum)