n = input()
cnt = 0

while len(n) > 1:
    n = str(sum(map(int,n)))
    cnt+=1

print(cnt)
print("YES" if int(n)%3 == 0 else "NO")