A = [5, 4, 3, 2, 1]

def merge(L, R):
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

def sort(A):
    #base case
    if len(A) <= 1:
        return A
    
    #divide by 2
    mid = len(A) // 2 #floor of middle
    L = A[:mid] #L = A[0..mid-1]
    R = A[mid:] #R = A[mid..n-1], n is the size of A

    #recurse
    L = sort(L) #sort the given list
    R = sort(R)

    #merge and return
    return merge(L, R)

print(A)
A=sort(A)
print(A)
