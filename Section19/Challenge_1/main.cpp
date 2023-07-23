// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

const int initial_width = 70;
const double first_column =  (25 / 100.0) * initial_width;
const double second_column = (35 / 100.0) * initial_width;
const double third_column =  (20 / 100.0) * initial_width;
const double forth_column =  (20 / 100.0) * initial_width;



void ruler() {
    const int rulerWidth = initial_width;
    const int numbersPerGroup = 10;
    const int groups = rulerWidth / numbersPerGroup;

    // Print the ruler with numbers from 0 to 9 repeating
    for (int group = 0; group < groups; ++group) {
        // Print the numbers from 0 to 9
        for (int num = 0; num < numbersPerGroup; ++num) {
            std::cout << num;
        }
    }

    // Print a newline at the end to move to the next line
    std::cout << std::endl;

}


void separator() {
    std::cout << std::setw(initial_width) << std::setfill('-')  << "\n" << std::setfill(' ') <<  std::endl;
    
}

void heads () {
    std::cout << std::left << std::setw(first_column) << "Countries";
    std::cout << std::setw(second_column) << "City";
    std::cout << std::right << std::setw(third_column) << "Population";
    std::cout << std::right << std::setw(forth_column) << "Price" << std::endl ;
}


int main()
{
    

    
    Tours tours
        { "Tour Ticket Prices from Miami",
                {
                    {
                        "Colombia", { 
                            { "Bogota", 8778000, 400.98 },
                            { "Cali", 2401000, 424.12 },
                            { "Medellin", 2464000, 350.98 },
                            { "Cartagena", 972000, 345.34 } 
                        },
                    },
                    {
                        "Brazil", { 
                            { "Rio De Janiero", 13500000, 567.45 },
                            { "Sao Paulo", 11310000, 975.45 },
                            { "Salvador", 18234000, 855.99 }
                        },
                    },
                    {
                        "Chile", { 
                            { "Valdivia", 260000, 569.12 }, 
                            { "Santiago", 7040000, 520.00 }
                    },
                },
                    { "Argentina", { 
                        { "Buenos Aires", 3010000, 723.77 } 
                    } 
                },
            }
        };


        
     ruler();
     
    // Unformatted display so you can see how to access the vector elements
    const double marginLeft = (initial_width - tours.title.length()) / 2;
    const double leftSpaceWithWidth = marginLeft + tours.title.length();
    
    std::cout << std::setprecision(2);
    
    std::cout << std::setw(leftSpaceWithWidth) << tours.title << "\n" << std::endl;
    
    
    heads();
    separator();
    
    
    for(auto country : tours.countries) {   // loop through the countries
        std::cout << std::left << std::setw(first_column) << country.name; 

        bool isFirstColumnRendered = true;
        
        for(auto city : country.cities) {       // loop through the cities for each country
            if(!isFirstColumnRendered) {
                std::cout <<  std::left << std::setw(first_column) << " ";
            }
            
            isFirstColumnRendered = false;            
            

            std::cout << std::setw(second_column) <<city.name;
            
                
            std::cout << std::setprecision(2);
            std::cout << std::right << std::setw(third_column) << city.population;
            std::cout << std::fixed << std::setw(forth_column) << city.cost;
            std::cout << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}