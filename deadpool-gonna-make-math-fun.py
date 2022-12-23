def dead():
    _ = int(input())
    nums = list(map(int, input().split()))
    positive, negative, zero = False, False, False

    for n in nums:
        if n == 0:
            zero = True
        if n > 0:
            positive = True
        if n < 0:
            negative = True
    if positive and (not negative and not zero):
        print("Positive Numbers")
    elif negative and (not positive and not zero):
        print("Negative Numbers")
    elif  negative and positive and zero:
        print("Real Numbers")
    else:
        print("Non Negative Numbers")
dead()


