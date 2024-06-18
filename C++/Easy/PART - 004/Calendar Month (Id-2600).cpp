#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    // Mapping of month number to month name
    std::unordered_map<std::string, std::string> month_map = {
        {"01", "January"},
        {"02", "February"},
        {"03", "March"},
        {"04", "April"},
        {"05", "May"},
        {"06", "June"},
        {"07", "July"},
        {"08", "August"},
        {"09", "September"},
        {"10", "October"},
        {"11", "November"},
        {"12", "December"}
    };

    std::string date;
    std::cin >> date; // Input the date in DD-MM-YYYY format

    // Extract month part from the date (MM)
    std::string month = date.substr(3, 2); // Extract characters from index 3 to 4

    // Retrieve month name from the map
    std::string month_name = month_map[month];

    // Output the month name
    std::cout << month_name << std::endl;

    return 0;
}
