def rotateArray(arr, d):
    for _ in range(d):
        temp = arr[0]
        for i in range(len(arr) - 1):
            arr[i] = arr[i + 1]
        arr[len(arr) - 1] = temp

n = int(input("Enter the number of elements: "))
arr = [int(input(f"Enter element {i + 1}: ")) for i in range(n)]

d = int(input("Enter the number of rotations: "))

rotateArray(arr, d)
print("Array after rotation:", arr)
