def cantor(s: str):
    if s == '---':
        return '- -'
    if s == '-':
        return '-'

    n = len(s)
    next_n = int(n/3)

    # 앞 1/3은 켜고, 가운데 1/3은 끄고, 마지막 1/3은 다시 켠 켠다.
    left = '-' * (next_n)
    center = ' ' * (next_n)
    right = left
    # 앞 1/3과 뒤 1/3에 대해 cantor를 수행
    left = cantor(left)
    right = left
    # 셋을 더해서 출력
    return left + center + right

while True:
    try:
        N = int(input())

        lines = '-' * (pow(3, N))

        result = cantor(lines)
        print(result)
    except EOFError:
        break