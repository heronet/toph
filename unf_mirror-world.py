def mirror():
    tcase = int(input())
    for _ in range(tcase):
        nums = list(map(int, input().split()))
        out = ""
        if nums[0] > nums[1]:
            out = str(nums[0]) + " < " + str(nums[1])
        if nums[0] < nums[1]:
            out = str(nums[0]) + " > " + str(nums[1])
        if nums[0] == nums[1]:
            out = str(nums[0]) + " = " + str(nums[1])
        print(out)
mirror()
