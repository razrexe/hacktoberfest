  
# Linearly search x in arr[]
# If x is present then return its location
# else return -1

# Time Complexity : O(n)
  
def linear_search(arr, x):
  
    for i in range(len(arr)):
  
        if arr[i] == x:
            return i
  
    return -1


arr = list(map(int, input().split()))
x = int(input("Enter the element to be searched : "))
print(linear_search(arr,x))