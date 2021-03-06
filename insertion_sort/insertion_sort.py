A = [5, 4, 3, 2, 1]

def sort():
    print(A)

    for j in range(1, len(A)):
        key = A[j]

        #insert into sorted sublist
        #which is in left hand (CLRS)
        i = j - 1
        while (i >= 0) and (A[i] > key):
            if A[i] > key:
                A[i + 1] = A[i]
                i -= 1
        A[i + 1] = key

    print(A)

sort()
