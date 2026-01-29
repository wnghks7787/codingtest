N = int(input())

lst = []
for i in range(1, N+1):
    lst.append(i)

result = []
check = [False] * N

def permutation(level):
    global lst, result, check

    if level == N:
        print_list(result)
        return
    
    for i in range(0, N):
        if check[i] == True:
            continue

        result.append(lst[i])
        check[i] = True

        permutation(level+1)

        result.pop()
        check[i] = False

def print_list(lst):
    for x in lst:
        print(x, end=" ")
    print()

permutation(0)