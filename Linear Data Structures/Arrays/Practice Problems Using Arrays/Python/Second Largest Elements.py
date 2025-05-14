def findSecondLargest(arr):
    largest = arr[0]
    secondLargest = -1
    for num in arr[1:]:
        if num > largest:
            secondLargest = largest
            largest = num
        elif num > secondLargest and num != largest:
            secondLargest = num
    return secondLargest

n = int(input("Enter the number of elements: "))
arr = [int(input(f"Enter element {i + 1}: ")) for i in range(n)]

secondLargest = findSecondLargest(arr)
print("Second largest element:", secondLargest)
