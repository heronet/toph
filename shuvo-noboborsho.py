def shuv():
    tc = int(input())
    for _ in range(tc):
        panjabi, pajama, time_req, time_left = list(map(int, input().split()))

        half = time_left // time_req
        takes = panjabi * pajama

        if takes <= half:
            print(takes)
        else:
            print(half)
shuv()
