#include <iostream>

int main() {
    int dayWeek;
    std::cout << "Enter the day of the week (from 1 to 7): ";
    std::cin >> dayWeek;

    std::string day;
    std::string  menuDay;
    if (dayWeek >= 1 && dayWeek <= 7)
    {
        if(dayWeek == 1)
        {
            day = "Monday";
            menuDay = "1. Borsch, 2. Jellied meat.";
        }
        if (dayWeek == 2)
        {
            day = "Tuesday";
            menuDay = "1. Roast pork, 2. Kissel.";
        }
        if(dayWeek == 3)
        {
            day = "Wednesday";
            menuDay = "1.Rassolnik, 2.Stolichny salad.";
        }
        if(dayWeek == 4)
        {
            day = "Thursday";
            menuDay = "1. Homemade cutlets, 2. Coffee.";
        }
        if(dayWeek == 5)
        {
            day = "Friday";
            menuDay = "1. Solyanka, 2. Fish salad.";
        }
        if(dayWeek == 6)
        {
            day = "Saturday";
            menuDay = "1. Pilaf, 2. Tea.";
        }
        if(dayWeek == 7)
        {
            day = "Sunday";
            menuDay = "1. Ukha, 2. Vinaigrette.";
        }

        std::cout << "Menu on " << day << std::endl;
        std::cout << "General part: 1. Chicken broth, 2. Beef goulash, 3. Olivier salad, 4. Compote." << std::endl;
        std::cout << "Dishes of the day: " << menuDay << std::endl;
    } else {
        std::cout << "You entered the wrong day number!" << std::endl;
        std::cout << "Enter the number of the day of the week - from 1 (Monday) to 7 (Sunday)" << std::endl;
    }
}
