def luck():
    _ = int(input())
    nums = list(map(int, input().split()))
    sevens = 0

    for n in nums:
        if n % 7 == 0:
            sevens += 1
    if sevens == 13:
        print("Luckily Unlucky")
    else:
        print("Lucky")
luck()
