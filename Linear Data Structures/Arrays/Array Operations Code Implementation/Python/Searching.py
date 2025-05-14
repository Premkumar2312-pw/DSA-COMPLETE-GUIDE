# Getting user input
arr = list(map(int, input("Enter the elements separated by space: ").split()))
search = int(input("Enter the value to search: "))

# Searching the element
found = False
for i in range(len(arr)):
    if arr[i] == search:
        print(f"Element {search} found at index {i}")
        found = True
        break

if not found:
    print(f"Element {search} not found in the array")

# Sample Output:
# Input:
# Enter the elements separated by space: 1 2 3 4 5
# Enter the value to search: 3
#
# Output:
# Element 3 found at index 2
