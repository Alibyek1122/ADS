from collections import deque 

T = int(input().strip())
for _ in range(T):
    N = int(input().strip())
    dq = deque()
    for i in range(N, 0, -1):
        dq.appendleft(i)
        for _ in range(i):
            dq.appendleft(dq.pop())
    print(*dq)