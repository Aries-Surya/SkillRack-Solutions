N = int(input())

# List to store the integers
numbers = []

# Take input N integers
for _ in range(N):
    numbers.append(int(input()))

# Remove duplicates and sort the list
unique_numbers = sorted(set(numbers))

# If there are less than 2 unique numbers, second largest doesn't exist
if len(unique_numbers) < 2:
    print("Second largest integer doesn't exist")
else:
    # Print the second last element
    print(unique_numbers[-2])
