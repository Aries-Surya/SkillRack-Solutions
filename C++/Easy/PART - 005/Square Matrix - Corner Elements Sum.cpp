def corner_elements_sum(matrix):
    """
    Calculates the sum of the elements in the corners of a square matrix.

    Args:
        matrix: A list of lists representing a square matrix.

    Returns:
        The integer sum of the elements in the corners of the matrix.
    """
    N = len(matrix)
    # Accessing corner elements directly
    return matrix[0][0] + matrix[0][N-1] + matrix[N-1][0] + matrix[N-1][N-1]

# Read the value of N
N = int(input())

# Initialize the sum of corner elements to 0
corner_sum = 0

# Read the elements of the square matrix
matrix = []
for _ in range(N):
    row = list(map(int, input().split()))
    matrix.append(row)

# Calculate the sum of the corner elements using the function
corner_sum = corner_elements_sum(matrix)

# Print the sum of the corner elements
print(corner_sum)
