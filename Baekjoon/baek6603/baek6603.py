# 재귀함수 이용
'''
select = 6
selected_lst = []

def printer(lst):
    for i in range(len(lst)):
        print(lst[i], end="")
        
        if i+1 != len(lst):
            print(" ", end="")
    print()

# 어디부터, 몇 개째인지?
def lotto(idx, selected):
    global k

    if selected == select:
        printer(selected_lst)
        return
    
    for i in range(idx, k):
        selected_lst.append(S[i])
        lotto(i+1, selected+1)
        selected_lst.pop()


while True:
    lst = list(map(int, input().split()))

    if lst[0] == 0:
        break

    k = lst[0]
    S = lst[1:]

    lotto(0, 0)
    print()
'''

# STL 이용
from itertools import combinations

while True:
    I = list(map(int, input().split()))

    k = I[0]
    arr = I[1:]

    if k == 0:
        break

    for comb in combinations(arr, 6):
        for u in comb:
            print(u, end=' ')
        print()
    print()