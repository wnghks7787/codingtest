from itertools import permutations

possibleNums = permutations(range(1, 10), 3)

predicts = []
count = 0
N = int(input())
for _ in range(N):
    predicts.append(input().split())

for possibleNum in possibleNums:
    check = True

    for predict in predicts:
        strike = 0
        ball = 0

        # 체크 로직
        a = int(predict[0][0])
        b = int(predict[0][1])
        c = int(predict[0][2])

        x = possibleNum[0]
        y = possibleNum[1]
        z = possibleNum[2]

        if a == x:
            strike += 1
        elif a == y or a == z:
            ball += 1
        if b == y:
            strike += 1
        elif b == x or b == z:
            ball += 1
        if c == z:
            strike += 1
        elif c == x or c == y:
            ball += 1
        
        if strike != int(predict[1]) or ball != int(predict[2]):
            check = False

    if check:
        count += 1

print(count)