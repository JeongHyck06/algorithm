def d(n):
    return n + sum(map(int, str(n)))

nums = set(range(1, 10001))
generated = set(d(i) for i in range(1, 10001))

self_numbers = sorted(nums - generated)

for n in self_numbers:
    print(n)