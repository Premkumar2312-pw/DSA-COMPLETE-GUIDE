# Getting user input
rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))

arr = []
print(f"Enter elements in the {rows}x{cols} matrix:")
for i in range(rows):
    row = list(map(int, input().split()))
    arr.append(row)

print("2D Array (Matrix):")
for row in arr:
    print(" ".join(map(str, row)))

# Sample Output:
# Input:
# Enter the number of rows: 2
# Enter the number of columns: 3
# Enter elements in the 2x3 matrix:
# 1 2 3
# 4 5 6
#
# Output:
# 2D Array (Matrix):
# 1 2 3
# 4 5 6
