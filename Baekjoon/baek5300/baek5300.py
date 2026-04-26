N = int(input())

pirate = 0
for i in range(N):
    pirate += 1
    print(pirate, end='')

    if (pirate % 6 == 0) and (pirate != N):
        print(" Go! ", end='')
    elif pirate != N:
        print(" ", end='')

    if pirate == N:
        print(" Go!")
        break