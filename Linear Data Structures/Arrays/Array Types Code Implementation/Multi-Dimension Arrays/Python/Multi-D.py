# Getting user input for layers, rows, and columns
layers = int(input("Enter the number of layers: "))
rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))

# Declaration of 3D array
arr = []

# Getting user input for array elements
print("Enter the elements of the array:")
for i in range(layers):
    layer = []
    for j in range(rows):
        row = list(map(int, input().split()))
        layer.append(row)
    arr.append(layer)

# Displaying the 3D array
print("3D Array:")
for i in range(layers):
    print(f"Layer {i + 1}:")
    for row in arr[i]:
        print(" ".join(map(str, row)))

# Sample Output:
# Input:
# Enter the number of layers: 2
# Enter the number of rows: 2
# Enter the number of columns: 2
# Enter the elements of the array:
# 1 2
# 3 4
# 5 6
# 7 8
#
# Output:
# 3D Array:
# Layer 1:
# 1 2
# 3 4
# Layer 2:
# 5 6
# 7 8
