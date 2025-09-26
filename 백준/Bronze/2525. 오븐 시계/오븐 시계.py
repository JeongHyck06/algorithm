import sys

h, m, t = map(int, sys.stdin.read().split())

total = h * 60 + m + t
print((total // 60) % 24, total % 60)