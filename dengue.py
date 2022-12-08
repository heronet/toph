def dengue():
    nums = list(map(int, input().split()))
    total = 0
    for n in nums:
        total = total + n
    print(total)
dengue()
