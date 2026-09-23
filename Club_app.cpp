
//Henry A. worked on this.
#include "Club_app.h"
#include <string>
#include <vector>
using namespace club;

void Club_app::execute(char choice)
{
    switch (choice) {
    case '1': 
        add_member(); 
        break;
    case '2': 
        delete_member(); 
        break;
    case '3': 
        add_officer(); 
        break;
    case '4': 
        delete_officer(); 
        break;
    case '5': 
        add_event(); 
        break;
    case '6': 
        delete_event(); 
        break;
    case '7': 
        display_club(); 
        break;
    case 'q':
    case 'Q':
        break;
    default:
        std::cout << "Error try again" << std::endl;
    }
}

std::string Club_app::get_string(const string& prompt)
{
    std::cout << prompt;
    string input;
    std::getline(cin, input);
    return input;
}

OFFICER_ROLE Club_app::get_position()
{
    std::cout << "1. President" << std::endl;
    std::cout << "2. Vice President" << std::endl;
    std::cout << "3. Treasurer" << std::endl;
    std::cout << "4. Secretary" << std::endl;
    std::cout << "5. Events Chair" << std::endl;
    std::cout << "6. Internet Chair" << std::endl;

    string choice = get_string("Choose a position: ");

    if (choice == "1") return PRESIDENT;
    if (choice == "2") return VICE_PRESIDENT;
    if (choice == "3") return TREASURER;
    if (choice == "4") return SECRETARY;
    if (choice == "5") return EVENTS_CHAIR;
    if (choice == "6") return INTERNET_CHAIR;

    cout << "Invalid position. Please try again.\n";
    return get_position();
}

void Club_app::add_member()
{
    std::string fName = get_string("Enter member's first name: ");
    std::string lName = get_string("Enter member's last name: ");
    std::string email = get_string("Enter member's email: ");
    
    unsigned short year = static_cast<unsigned short>
        (std::stoi(get_string("Enter year joined: ")));
    unsigned short month = static_cast<unsigned short>
        (std::stoi(get_string("Enter month joined: ")));
    unsigned short day = static_cast<unsigned short>
        (std::stoi(get_string("Enter day joined: ")));

    Date dateJoined(year, month, day);
    
    bool didInsert = 
        club.insert_member(Member(fName, lName, email, dateJoined));
    
        if (!didInsert) {
        std::cout << "Problem adding a member please try again." << std::endl;
    }
}

void Club_app::delete_member()
{
    std::string email = 
        get_string("Enter the email of the member to delete: ");
    bool didDelete = club.remove_member(email);

    if (!didDelete) {
        std::cout << "Problem deleting the member please try again." 
            << std::endl;
    }
}

void Club_app::add_officer()
{
    std::string fName = get_string("Enter member's first name: ");
    std::string lName = get_string("Enter member's last name: ");
    std::string email = get_string("Enter member's email: ");
    
    unsigned short year = static_cast<unsigned short>
        (std::stoi(get_string("Enter year joined: ")));
    unsigned short month = static_cast<unsigned short>
        (std::stoi(get_string("Enter month joined: ")));
    unsigned short day = static_cast<unsigned short>
        (std::stoi(get_string("Enter day joined: ")));

    Date dateJoined(year, month, day);

    enum OFFICER_ROLE role = get_position();

    year = static_cast<unsigned short>
        (std::stoi(get_string("Enter experation year: ")));
    month = static_cast<unsigned short>
        (std::stoi(get_string("Enter experation month: ")));
    day = static_cast<unsigned short>
        (std::stoi(get_string("Enter experation day: ")));

    Date experationDate(year, month, day);

    bool didInsert = club.insert_officer(Officer
        (fName, lName, email, dateJoined, role, experationDate));
}

void Club_app::delete_officer()
{
    std::string email = 
        get_string("Enter the email of the officer to delete: ");
    bool didDelete = club.remove_member(email);

    if (!didDelete) {
        std::cout << "Problem deleting the officer please try again." 
            << std::endl;
    }
}
void Club_app::add_event()
{
    std::string name = get_string("Enter the event name: ");
    std::string description = get_string("Enter a description: ");
    std::string location = get_string("Enter location of the event: ");
    unsigned short year = static_cast<unsigned short>
        (std::stoi(get_string("Enter start year: ")));
    unsigned short month = static_cast<unsigned short>
        (std::stoi(get_string("Enter start month: ")));
    unsigned short day = static_cast<unsigned short>
        (std::stoi(get_string("Enter start day: ")));
    unsigned short hour = static_cast<unsigned short>
        (std::stoi(get_string("Enter start hour: ")));
    unsigned short minute = static_cast<unsigned short>
        (std::stoi(get_string("Enter start minute: ")));
    char am_pm = get_string("Does it start in the am or pm: ")[0];

    Date startDate(year, month, day);
    Time startTime(hour, minute, am_pm);
    Datetime startDateTime(startDate, startTime);

    year = static_cast<unsigned short>
        (std::stoi(get_string("Enter end year: ")));
    month = static_cast<unsigned short>
        (std::stoi(get_string("Enter end month: ")));
    day = static_cast<unsigned short>
        (std::stoi(get_string("Enter end day: ")));  
    hour = static_cast<unsigned short>
        (std::stoi(get_string("Enter end hour: ")));
    minute = static_cast<unsigned short>
        (std::stoi(get_string("Enter end minute: ")));  

    Date endDate(year, month, day);
    Time endTime(hour, minute, am_pm);
    Datetime endDateTime(endDate, endTime);

    Event clubEvent(name, description, startDateTime, endDateTime, location);
    club.insert_event(clubEvent);
}

void Club_app::delete_event()
{
    std::string name = get_string("Enter the event name: ");
    unsigned short year = static_cast<unsigned short>
        (std::stoi(get_string("Enter start year: ")));
    unsigned short month = static_cast<unsigned short>
        (std::stoi(get_string("Enter start month: ")));
    unsigned short day = static_cast<unsigned short>
        (std::stoi(get_string("Enter start day: ")));
    unsigned short hour = static_cast<unsigned short>
        (std::stoi(get_string("Enter start hour: ")));
    unsigned short minute = static_cast<unsigned short>
        (std::stoi(get_string("Enter start minute: ")));
    char am_pm = get_string("Does it start in the am or pm: ")[0];

    Date startDate(year, month, day);
    Time startTime(hour, minute, am_pm);
    Datetime startDateTime(startDate, startTime);
    
    //removes by Date and not DateTime but events only store DateTimes
    //club.remove_event(name, startDateTime);
}

void Club_app::display_club()
{
    club.display_roster();
}

//public
Club_app::Club_app(): 
    text_ui("Club menu", 
        {{'1', "Add member"},
        {'2', "Delete member"},
        {'3', "Add officer"}, 
        {'4', "Delete officer"},
        {'5', "Add event"}, 
        {'6', "Delete event"},
        {'7', "Display club"}, 
        {'q', "Quit"}}),
    club("Club", "Club roster") {}

void Club_app::run()
{
    char choice = ' ';
    while (choice != 'q') {
        text_ui.show();
        choice = text_ui.get_choice();
        execute(choice);
    }
}
