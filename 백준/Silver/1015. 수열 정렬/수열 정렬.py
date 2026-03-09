N = int(input())
A = list(map(int, input().split())) # A 배열
B = [x for x in range(N)] # A배열의 인덱스

arr = list(zip(A, B)) #(a,b)
arr.sort()

P = [0] * N
for i in range(N):
    value, original_index = arr[i]
    P[original_index] = i

print(*P)