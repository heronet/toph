def genius():
    tcase = int(input())
    for i in range(tcase):
        nums = list(map(int, input().split()))
        print("Case #%d: %d" % (i+1, nums[0]+nums[1]))
genius()
