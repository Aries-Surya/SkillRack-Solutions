def arrange_alphabets(S):
    """
    Arrange the alphabets in the string S in descending order, removing duplicates.

    Args:
        S: A string containing only lowercase alphabets.

    Returns:
        A string containing the unique alphabets in S in descending order.
    """
    # Convert the sorted characters to a set to remove duplicates
    sorted_chars = sorted(S, reverse=True)
    unique_chars = sorted(set(sorted_chars), reverse=True)
    # Join the unique characters to form the result string
    return ''.join(unique_chars)

# Read the input string S
S = input().strip()

# Arrange the alphabets in descending order and remove duplicates
arranged_string = arrange_alphabets(S)

# Print the arranged string
print(arranged_string)
