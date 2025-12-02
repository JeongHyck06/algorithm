n = int(input())
count = 0

for _ in range(n):
    word = input().strip()
    seen = set()
    prev = None
    ok = True

    for ch in word:
        if ch != prev:
            if ch in seen:
                ok = False
                break
            seen.add(ch)
        prev = ch

    if ok:
        count += 1

print(count)