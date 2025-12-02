n, x = map(int, input().split())
arr = list(map(int, input().split()))

result = [v for v in arr if v < x]
print(*result)