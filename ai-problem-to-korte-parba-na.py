def aiprob():
    _ = int(input())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    count = 0
    for i in arr1:
        if i in arr2:
            count += 1
    print(count)
aiprob()

