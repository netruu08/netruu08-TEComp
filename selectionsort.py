# Selection Sort in Python
# Time Complexity: O(n^2)

def selectionSort(array, size):
    for i in range(size):
        min_index = i

# Find the index of the minimum element in the unsorted part
    for j in range(i + 1, size):
        if array[j] < array[min_index]:
            min_index = j

# Swap the found minimum element with the first element
    array[i], array[min_index] = array[min_index],array[i]

# Driver Code
arr = [-2, 45, 0, 11, -9, 88, -97, -202, 747]
size = len(arr)

selectionSort(arr, size)

print("The array after sorting in Ascending Order by Selection Sort is:")
print(arr)
