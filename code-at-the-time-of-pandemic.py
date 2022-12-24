def code():
    tc = int(input())
    for i in range(1, tc + 1):
        days = int(input())
        print("Case {}:".format(i))
        new, total = 0, 1
        for day in range(1, days + 1):
            print("Day = {}, New = {}, Total = {}".format(day, new, total))
            old_total = total
            total = total * 3
            new = total - old_total
code()

