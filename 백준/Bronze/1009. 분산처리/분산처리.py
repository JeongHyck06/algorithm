t = int(input())

for _ in range(t):
    a, b = map(int, input().split())
    res = pow(a, b, 10)
    print(10 if res == 0 else res)