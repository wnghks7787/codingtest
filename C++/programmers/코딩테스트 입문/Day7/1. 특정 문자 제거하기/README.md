# 프로그래머스 입문 Day7-1
## 제목: 특정 문자 제거하기
## 문제 설명
문자열 `my_string과` 문자 letter이 매개변수로 주어집니다. `my_string에서` `letter를` 제거한 문자열을 return하도록 solution 함수를 완성해주세요.

## 입출력 예시
### 예시 1
#### 입력
```
my_string = "abcdef"
letter = "f"
```

#### 출력
```
"abcde"
```

### 예시 2
#### 입력
```
my_string = "BCBdbe"
letter = "B"
```

#### 출력
```
"Cdbe"
```


- 1 ≤ `my_string의` 길이 ≤ 100
- `letter은` 길이가 1인 영문자입니다.
- `my_string과` `letter은` 알파벳 대소문자로 이루어져 있습니다.
- 대문자와 소문자를 구분합니다.
- 사용 언어: C++