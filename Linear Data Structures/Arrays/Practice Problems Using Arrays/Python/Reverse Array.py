def reverseArray(arr):
    start, end = 0, len(arr) - 1
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1

n = int(input("Enter the number of elements: "))
arr = [int(input(f"Enter element {i + 1}: ")) for i in range(n)]

reverseArray(arr)
print("Reversed Array:", arr)
