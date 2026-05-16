# 프로그래머스 입문 Day15-2
## 제목: 인덱스 바꾸기
## 문제 설명
문자열 `my_string`과 정수 num1, num2가 매개변수로 주어질 때, `my_string`에서 인덱스 `num1`과 인덱스 `num2`에 해당하는 문자를 바꾼 문자열을 return 하도록 solution 함수를 완성해보세요.

## 입출력 예시
### 예시 1
#### 입력
```
my_string = "hello"
num1 = 1
num2 = 2
```

#### 출력
```
"hlelo"
```

### 예시 2
#### 입력
```
my_string = "I love you"
num1 = 3
num2 = 6
```

#### 출력
```
"I l veoyou"
```

## 제한사항
- 1 < `my_string`의 길이 < 100
- 0 ≤ `num1`, `num2` < `my_string`의 길이
- `my_string`은 소문자로 이루어져 있습니다.
- `num1` ≠ `num2`
- 사용 언어: C++

## 결과
```
테스트 1 〉	통과 (0.01ms, 3.94MB)
테스트 2 〉	통과 (0.01ms, 4.19MB)
테스트 3 〉	통과 (0.01ms, 4.07MB)
테스트 4 〉	통과 (0.01ms, 4MB)
```