#include <stdio.h>

// Define the structure 'employee'
struct employee {
    int employee_id;
    int salary;
    char name[101]; // Maximum size for name (including null terminator)
};

int main() {
    struct employee e; // Declare variable of type 'employee'

    // Read input using scanf
    scanf("%d %d %[^\n]", &e.employee_id, &e.salary, e.name);

    // Print employee details
    printf("ID: %d\n", e.employee_id);
    printf("Name: %s\n", e.name);
    printf("Salary: %d\n", e.salary);

    return 0; // Return 0 to indicate successful execution
}
