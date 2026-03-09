n = int(input())
arr = [1,0,0]

for _ in range(n):
    x, y = map(int, input().split())
    arr[x-1], arr[y-1] = arr[y-1], arr[x-1]

for i in range(3):
    if arr[i] == 1:
        print(i+1)
        break