# 백준 32314번
## 제목: Christmas Tree Adapter
## 입력
The first input line contains an integer, a (1 ≤ a ≤ 20), indicating the ampere for the Christmas tree. The second input line contains two integers: w (1 ≤ w ≤ 2000), indicating the watt for the candidate adapter and v (1 ≤ v ≤ 100), indicating the volt for the candidate adapter. Assume that the input will not result in fractions in divisions.

### 요약
첫 줄에는 tree의 필요 암페어가 입력된다.
둘째 줄에는 구매하려고 하는 어댑터의 와트와 볼트가 입력된다.

## 출력
Print 1 if the candidate adapter will work with the tree, 0 (zero) otherwise.

### 요약
tree의 필요 암페어보다 어댑터의 암페어가 크거나 같으면 1, 그렇지 않으면 0을 출력한다.

## 입출력 예시
### 예시 1
#### 입력
```
5
60 10
```

#### 출력
```
1
```

### 예시 2
#### 입력
```
7
80 20
```

#### 출력
```
0
```

### 예시 3
#### 입력
```
3
120 40
```

#### 출력
```
1
```

## 제한사항
- 시간제한: 1초
- 메모리 제한: 1024MB
- 난이도: 브론즈 V
- 사용 언어: PYTHON