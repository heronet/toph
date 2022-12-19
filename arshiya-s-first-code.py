def first():
    n = int(input())
    count = n // 2
    if n % 2 != 0:
        count += 1
    print(count)
first()
