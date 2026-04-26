# 리트코드 2번
## 제목: Add Two Numbers
## 입력
ListNode를 두 개 입력받는다. ListNode의 구조는 다음과 같다.
```c++
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 ```

## 출력
두 리스트 노드를 더한 결과를 반환한다.

## 입출력 예시
### 예시 1
#### 입력
```
l1 = [2,4,3], l2 = [5,6,4]
```

#### 출력
```
[7,0,8]
```

### 예시 2
#### 입력
```
l1 = [0], l2 = [0]
```

#### 출력
```
[0]
```

### 예시 3
#### 입력
```
l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
```
#### 출력
```
[8,9,9,9,0,0,0,1]
```

## 제한사항
- 각 링크드 리스트의 크기는 1 이상 100 이하이다.
- 각 노드의 val 값은 0 이상 10 미만이다.
- 각 링크드 리스트는 0으로 끝나지 않는다.
- 사용 언어: C++