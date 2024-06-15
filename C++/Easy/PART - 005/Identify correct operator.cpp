E = input().strip()

# Split the expression based on the equal symbol
expression_parts = E.split('=')

# Ensure the expression contains three parts
if len(expression_parts) != 2:
    print("Invalid input expression: Operator not found.")
else:
    # Extract the part before '=' and the result
    remaining = expression_parts[0]
    result = expression_parts[1]

    # Find the operator in the expression parts
    operator = None
    for char in remaining:
        if char in ['+', '-', '*', '/']:
            operator = char
            break
    if operator is None:
        for char in result:
            if char in ['+', '-', '*', '/']:
                operator = char
                break

    if operator is None:
        print("Invalid input expression: Operator not found.")
    else:
        # Extract numbers B and C
        B_str, C_str = remaining.split(operator)

        # Convert the numbers from strings to integers
        B = int(B_str)
        C = int(C_str)

        # Evaluate the expression with each operator
        for possible_operator in ['+', '-', '*', '/']:
            try:
                if possible_operator == '/':
                    if C != 0 and eval(f'{B}{possible_operator}{C}') == int(result):
                        print(possible_operator)
                        break
                else:
                    if eval(f'{B}{possible_operator}{C}') == int(result):
                        print(possible_operator)
                        break
            except ZeroDivisionError:
                pass  # Skip division by zero errors

