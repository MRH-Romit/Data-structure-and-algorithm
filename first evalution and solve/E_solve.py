def can_sort_by_reversing_segment():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    # Step 1: Parse input
    n = int(data[0])
    array = list(map(int, data[1:]))
    
    # Step 2: Find the left boundary of the unsorted segment
    left = 0
    while left < n - 1 and array[left] <= array[left + 1]:
        left += 1
    
    # If the array is already sorted
    if left == n - 1:
        print("yes")
        print(1, 1)
        return
    
    # Step 3: Find the right boundary of the unsorted segment
    right = n - 1
    while right > 0 and array[right] >= array[right - 1]:
        right -= 1
    
    # Step 4: Reverse the segment and check if the array is sorted
    array[left:right + 1] = reversed(array[left:right + 1])
    
    if all(array[i] <= array[i + 1] for i in range(n - 1)):
        print("yes")
        print(left + 1, right + 1)  # Convert to 1-based indexing
    else:
        print("no")

# Example usage (for testing purposes):
# If running locally, replace sys.stdin with a string input:
# import sys
# sys.stdin = open('input.txt', 'r')
can_sort_by_reversing_segment()
