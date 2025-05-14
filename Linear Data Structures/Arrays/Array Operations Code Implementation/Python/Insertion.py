# Getting user input
arr = list(map(int, input("Enter the elements separated by space: ").split()))
pos = int(input(f"Enter the position to insert (0 to {len(arr)}): "))
val = int(input("Enter the value to insert: "))

# Creating a new array with the inserted element
new_arr = []

for i in range(len(arr) + 1):
    if i < pos:
        new_arr.append(arr[i])
    elif i == pos:
        new_arr.append(val)
    else:
        new_arr.append(arr[i - 1])

print("Array after insertion:", new_arr)

# Sample Output:
# Input:
# Enter the elements separated by space: 1 2 3 4 5
# Enter the position to insert (0 to 5): 2
# Enter the value to insert: 10
#
# Output:
# Array after insertion: [1, 2, 10, 3, 4, 5]
