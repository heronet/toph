def shazam():
    _ = int(input())
    nums = list(map(int, input().split()))

    counter = 0;
    for i in nums:
        if i % 3 == 0:
            counter += 1
    print(counter)
shazam()
