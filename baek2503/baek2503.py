def comp(i, j, k, lsts):
    correct = 0

    for lst in lsts:
        strike = 0
        ball = 0

        x = int(lst[0][0])
        y = int(lst[0][1])
        z = int(lst[0][2])

        if x == i:
            strike += 1
        elif x == j or x == k:
            ball += 1
        if y == j:
            strike += 1
        elif y == i or y == k:
            ball += 1
        if z == k:
            strike += 1
        elif z == i or z == j:
            ball += 1

        if strike == int(lst[1]) and ball == int(lst[2]):
            correct += 1

    if correct == len(lsts):
        return 1
    else:
        return 0

N = input()

predicts = []

for _ in range(0, int(N)):
    predict = input().split()
    predicts.append(predict)

num = 0

for i in range(1, 10):
    for j in range(1, 10):
        for k in range(1, 10):
            if i != j and i != k and j != k:
                num += comp(i, j, k, predicts)

print(num)