N = int(input())

ranks = []

for _ in range (0, N):
    b, p, q, r = map(int, input().split())

    ranks.append([b, p*q*r, p+q+r])

ranks.sort(key=lambda x: (x[1], x[2], x[0]))

for i in range(0, 3):
    print(ranks[i][0], end=" ")
print()