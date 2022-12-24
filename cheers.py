def luck():
    tc = int(input())
    for _ in range(tc):
        n = int(input())
        if n % 19 == 0:
            print("Lucky")
        else:
            print("Unlucky")
luck()
