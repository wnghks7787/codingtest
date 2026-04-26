# Non-DP
'''
def fib(num: int):
    if num == 0:
        return 0
    elif num == 1:
        return 1
    else:
        return fib(num - 1) + fib(num - 2)

n = int(input())
result = fib(n)

print(result)
'''

# With DP
def fib(num: int):
    global fib_arr

    if fib_arr[num] != -1:
        return fib_arr[num]
    else:
        fib_arr[num] = fib(num-1) + fib(num-2)
        return fib_arr[num]

n = int(input())
fib_arr = [-1] * (n+2)

fib_arr[0] = 0
fib_arr[1] = 1

fib(n)
print(fib_arr[n])