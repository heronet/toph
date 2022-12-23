def gog():
    tc = int(input())
    for _ in range(tc):
        nums = list(map(int, input().split()))
        if nums[0] * nums[1] % 2 == 0:
            print("Bob")
        else:
            print("Alice")
gog()

