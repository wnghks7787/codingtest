import copy

VOWELS = ['a', 'e', 'i', 'o', 'u']


def combination(index, level, N, R, input_list, output_list, comb_list):
    if level == R:
        output_list.append(copy.deepcopy(comb_list))
        return

    for i in range(index, N):
        comb_list.append(input_list[i])
        combination(i+1, level+1, N, R, input_list, output_list, comb_list)
        comb_list.pop()

def list_to_string(lst):
    s = ""
    for x in lst:
        s += x
    
    return s

# 초기 세팅
L, C = map(int, input().split())
candidates = list(map(str, input().split()))

answer = []
password = []

# 자음 모음 분리하기
consonant = []
vowel = []

for c in candidates:
    if c in VOWELS:
        vowel.append(c)
    else:
        consonant.append(c)

vowel_size = len(vowel)
consonant_size = len(consonant)

# 들어가는 vowel 갯수 + 들어가는 consonant 갯수 == C(vowel 갯수는 1 이상, consonant 갯수는 2 이상이여야 한다.) 즉 C - vowel갯수 == consonant 갯수임.
vowel_in = 1
result = []
while True:
    vowel_out = []
    consonant_out = []

    consonant_in = L - vowel_in
    if consonant_in < 2:
        break

    # vowel 조합 체크
    comb_list = []
    combination(0, 0, vowel_size, vowel_in, vowel, vowel_out, comb_list)
    
    # consonant 조합 체크
    comb_list = []
    combination(0, 0, consonant_size, consonant_in, consonant, consonant_out, comb_list)

    # vowel과 consonant 합쳐주기

    for vowel_add in vowel_out:
        for consonant_add in consonant_out:
            result.append(list_to_string(sorted(vowel_add+consonant_add)))

    vowel_in += 1
# 배열 정렬 후 출력
result.sort()
for x in result:
    print(x)