def mines():
    iline = input()
    mines = iline.count('m')
    for _ in range(len(iline) - 1):
        line = input()
        mines = mines + line.count('m')
    print(mines)
mines()

