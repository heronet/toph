def node():
    tc = int(input())
    for i in range(tc):
        level = 0
        n = 1
        target = int(input())
        while n <= target:
            level += 1
            n = n + n
        print("Case " + str(i+1) + ": " + str(level))
node()
