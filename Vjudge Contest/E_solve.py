def can_sort_by_reversing_segment():
    import sys
    input = sys.stdin.read
    data = input().split()
    
 
    n = int(data[0])
    array = list(map(int, data[1:]))
    

    left = 0
    while left < n - 1 and array[left] <= array[left + 1]:
        left += 1
    

    if left == n - 1:
        print("yes")
        print(1, 1)
        return
    

    right = n - 1
    while right > 0 and array[right] >= array[right - 1]:
        right -= 1

    array[left:right + 1] = reversed(array[left:right + 1])
    
    if all(array[i] <= array[i + 1] for i in range(n - 1)):
        print("yes")
        print(left + 1, right + 1)  

can_sort_by_reversing_segment()
