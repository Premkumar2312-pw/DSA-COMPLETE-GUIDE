# Getting user input
arr = list(map(int, input("Enter the elements separated by space: ").split()))
pos = int(input(f"Enter the position to delete (0 to {len(arr) - 1}): "))

# Deleting the element using a new list
new_arr = []

for i in range(len(arr)):
    if i != pos:
        new_arr.append(arr[i])

print("Array after deletion:", new_arr)

# Sample Output:
# Input:
# Enter the elements separated by space: 1 2 3 4 5
# Enter the position to delete (0 to 4): 2
#
# Output:
# Array after deletion: [1, 2, 4, 5]
