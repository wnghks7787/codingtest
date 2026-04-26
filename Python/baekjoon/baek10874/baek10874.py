N = int(input())

answer_sheet = [1, 2, 3, 4 ,5, 1, 2, 3, 4, 5]
for i in range(N):
    answers = list(map(int, input().split()))
    if answers == answer_sheet:
        print(i+1)