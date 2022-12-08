def mirror():
    tcase = int(input())
    for _ in range(tcase):
        nums = list(input().split())
        a = int(nums[0][::-1])
        b = int(nums[1][::-1])

        if a > b:
            print(nums[0] + " > " + nums[1])
        if a < b:
            print(nums[0] + " < " + nums[1])
        if a == b:
            print(nums[0] + " = " + nums[1])
mirror()
