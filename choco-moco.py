def main():
    tc = int(input())
    for _ in range(tc):
        n = int(input())
        ncpy = n
        aminul = False
        consumed = 0;
        counter = 0
        while ncpy > counter:
            counter += 1
            ncpy -= counter
            aminul = not aminul
        if aminul:
            print("Aminul")
        else:
            print("Imran")
main()
