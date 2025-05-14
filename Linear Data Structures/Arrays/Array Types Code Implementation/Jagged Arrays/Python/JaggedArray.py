# Getting user input for number of rows
rows = int(input("Enter the number of rows: "))

# Declaring a jagged array (list of lists)
arr = []

# Getting user input for each row's size and elements
for i in range(rows):
    cols = int(input(f"Enter the number of columns for row {i + 1}: "))
    row = list(map(int, input(f"Enter the elements of row {i + 1}: ").split()))
    arr.append(row)

# Displaying the jagged array
print("Jagged Array:")
for row in arr:
    print(" ".join(map(str, row)))

# Sample Output:
# Input:
# Enter the number of rows: 2
# Enter the number of columns for row 1: 3
# Enter the elements of row 1: 1 2 3
# Enter the number of columns for row 2: 2
# Enter the elements of row 2: 4 5
#
# Output:
# Jagged Array:
# 1 2 3
# 4 5
