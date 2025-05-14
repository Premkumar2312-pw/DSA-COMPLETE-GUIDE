# Getting user input
arr = list(map(int, input("Enter the elements separated by space: ").split()))
pos = int(input(f"Enter the position to update (0 to {len(arr) - 1}): "))
new_val = int(input("Enter the new value: "))

# Updating element
arr[pos] = new_val

print("Array after update:", arr)

# Sample Output:
# Input:
# Enter the elements separated by space: 1 2 3 4 5
# Enter the position to update (0 to 4): 2
# Enter the new value: 10
#
# Output:
# Array after update: [1, 2, 10, 4, 5]
