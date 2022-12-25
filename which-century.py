def cent():
    tc = int(input())
    for i in range(1, tc + 1):
        year = int(input())
        century = year // 100
        if year % 100 != 0:
            century += 1
        last_digit = century % 10
        postfix = "th"
        if century == 11 or century == 12 or century == 13:
            postfix = "th"
        elif last_digit == 1:
            postfix = "st"
        elif last_digit == 2:
            postfix = "nd"
        elif last_digit == 3:
            postfix = "rd"
        print("Case #{}: {}{} century!".format(i, century, postfix))
cent()

