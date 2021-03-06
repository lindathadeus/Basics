A = [5, 4, 3, 2, 1]

def merge1(L, R):
    i = 0
    j = 0
    U = []
    while i < len(L) and j < len(R):
        if L[i] <= R[j]:
            U.append(L[i])
            i += 1
        else:
            U.append(R[j])
            j += 1
 
    if i < len(L):
        U.extend(L[i:])
    if j < len(R):
        U.extend(R[j:])
    return U

def merge11(L, R):
    i = 0
    j = 0
    U = []
    while i < len(L) and j < len(R):
        if L[i] <= R[j]:
            U.append(L[i])
            i += 1
        else:
            U.append(R[j])
            j += 1

    if i < len(L):
        U.extend(L[i:])
    else:
        U.extend(R[j:])

def sort(A):
    #base case
    if len(A) <= 1:
        return A
    
    #divide by 2
    mid = len(A) // 2
    L = A[:mid]
    R = A[mid:]

    #recurse
    L = sort(L)
    R = sort(R)

    #merge and return
    #return list(merge(L, R))
    print(type(R))
    return merge11(L, R)
    return merge11(L, R)

print(A)
A=sort(A)
print(A)
