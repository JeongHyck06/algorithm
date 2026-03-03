n = int(input())
origin = n # 초기 수
cnt = 0
while(True):
    a = n//10 # 10의자리
    b = n%10 # 1의자리

    new_num = (b * 10) + ((a+b) % 10)
    n = new_num
    cnt += 1
    if new_num == origin:
        break

print(cnt)