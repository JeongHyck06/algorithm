import sys, math

it = iter(sys.stdin.read().split())
t = int(next(it))
out = []
for _ in range(t):
    a = int(next(it)); b = int(next(it))
    out.append(str(a * b // math.gcd(a, b)))
print("\n".join(out))