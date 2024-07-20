#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

void menu();

class managemenu
{
    
    
    public:
    string username;
    managemenu()
    {
        system("color 0C");
        cout<<"\n\n\n\n\n\t Enter the admin name to Continue : ";
        cin>>username;
        system("CLS");
        menu();
    }
};

class Customer
{
public:
    string name, gender, address;
    int age, mobileNo;
    static int cusID;
    char all[999];
    void getdetails()
    {
        ofstream out("old-customer.txt", ios::app);
        {

            cout << "Enter the Customer ID : ";
            cin >> cusID;
            cout << "Enter the Name of Customer : ";
            cin >> name;
            cout << "Enter the Gender of the Customer : ";
            cin >> gender;
            cout << "Enter the Age of Customer: ";
            cin >> age;
            cout << "Enter the Mobile Number of the customer :";
            cin >> mobileNo;
            cout << "Enter the Address of Customer: ";
            cin >> address;
        }
        out << "\n Customer ID : " << cusID << "\n Name : " << name << "\n Gender : " << gender << "\n Age : " << age << "\n Mobile Number :" << mobileNo << "\n Address : " << address;
        out.close();
        cout << " \n We saved your details for future purposes " << endl;
    }

    void printdetails()
    {
        ifstream in("old-customer.txt");
        {
            if (!in)
            {
                cout << "File error!!" << endl;
            }

            while (!(in.eof()))
            {
                in.getline(all, 999);
            }
            in.close();
        }
    }
};
int Customer::cusID;

class Cabs
{
public:
    int cabChoice;
    int kilometers;
    float Cabcost;
    static float lastcabCost;

    void cabDetails()
    {
        cout << "We collaborated with fastest, safest and smartest cab service around the country " << endl;
        cout << " ----------------Cabs-----------------\n"
             << endl;

        cout << "1. Rent a Standard Cab - Rs.15 per KM" << endl;
        cout << "2. Rent a Luxury Cab - Rs.25 per KM" << endl;

        cout << "\n To calculate the cost for your journey : " << endl;
        cout << "Enter which kind of Cab you want : ";
        cin >> cabChoice;
        cout << "Enter Kilometers you have to travel : ";
        cin >> kilometers;

        int hireCab;

        if (cabChoice == 1)
        {
            Cabcost = 15 * kilometers;
            cout << "\nThe cost of your journey is : " << Cabcost << " Rupees for a standard Cab.";
            cout << "\nPress 1 to hire this Cab : or" << endl;
            cout << "Press 2 to select another Cab : " << endl;
            cin >> hireCab;

            system("CLS");

            if (hireCab == 1)
            {
                lastcabCost = Cabcost;
                cout << "\n You have successfully hired a Standard Cab. " << endl;
                cout << "\n Goto Menu and Take the Receipt " << endl;
            }
            else if (hireCab == 2)
            {
                cabDetails();
            }
            else
            {
                cout << "Invalid input!! Redirecting to previous menu\n Please Wait!" << endl;
                Sleep(2000);
                system("CLS");
                cabDetails();
            }
        }
        else if (cabChoice == 2)
        {
            Cabcost = 25 * kilometers;
            cout << "\nThe cost of your journey is " << Cabcost << " Rupees for a luxury Cab.";
            cout << "\nPress 1 to hire this Cab : or" << endl;
            cout << "Press 2 to select another Cab : " << endl;
            cin >> hireCab;

            system("CLS");

            if (hireCab == 1)
            {
                lastcabCost = Cabcost;
                cout << "\n You have successfully hired a Standard Cab. " << endl;
                cout << "\n Goto Menu and Take the Receipt " << endl;
            }
            else if (hireCab == 2)
            {
                cabDetails();
            }
            else
            {
                cout << "Invalid input!! Redirecting to previous menu\n Please Wait!" << endl;
                Sleep(2000);
                system("CLS");
                cabDetails();
            }
        }
        else
        {
            cout << "Invalid Input!! Redirecting to main menu \n Please Wait!!" << endl;
            Sleep(2000);
            system("CLS");
            menu();
        }
        cout << "Press 1 to Redirect to main menu : ";
        cin >> hireCab;
        system("CLS");
        if (hireCab == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
};
float Cabs ::lastcabCost;

class Booking
{
public:
    int choiceHotel;
    int packchoice;
    static float hotelcost;

    void hotels()
    {
        string hotelNo[] = {"The Taj Hotel", " Gulmohar's Hotel", "The Avendra"};
        for (int i = 0; i < 3; i++)
        {
            cout << (i + 1) << "." << hotelNo[i] << endl;
        }

        cout << "\n Currently we collabrated with above hotels!" << endl;
        cout << " Press any key to back or\nEnter the number of the hotel you want to book : ";
        cin >> choiceHotel;

        system("CLS");

        if (choiceHotel == 1)
        {
            cout << "------------WELCOME TO THE TAJ------------\n"
                 << endl;
            cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;

            cout << "Packages offered by The Taj : \n " << endl;
            cout << "1.Standard Pack " << endl;
            cout << "\tAll basic facilities you need just for : Rs.5000.00" << endl;
            cout << "2.Premium Pack " << endl;
            cout << "\tEnjoy the Premium Pack : Rs.10000.00 " << endl;
            cout << "3.Luxury Pack " << endl;
            cout << "\t Live the Luxury at the Taj : Rs.15000.00" << endl;

            cout << "\nPress another key to back or\n Enter the package you want to book: ";
            cin >> packchoice;

            if (packchoice == 1)
            {

                hotelcost = 5000.00;
                cout << "\nYou have successfully booked Standard Pack at The Taj.  " << endl;
                cout << "Goto menu to take the receipt. " << endl;
            }
            else if (packchoice == 2)
            {

                hotelcost = 10000.00;
                cout << "\nYou have successfully booked Premium Pack at The Taj.  " << endl;
                cout << "Goto menu to take the receipt. " << endl;
            }
            else if (packchoice == 3)
            {

                hotelcost = 15000.00;
                cout << "\nYou have successfully booked Luxury Pack at The Taj.  " << endl;
                cout << "Goto menu to take the receipt. " << endl;
            }

            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu \n Please Wait!!" << endl;
                system("CLS");
                Sleep(2000);
                hotels();
            }
            int gotomenu;
            cout << "\nPress 1 to redirect to main menu : ";
            cin >> gotomenu;
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }

        if (choiceHotel == 2)
        {
            cout << "------------WELCOME TO THE GULMOHAR'S HOTEL------------\n"
                 << endl;
            cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;

            cout << "Packages offered by The Gulmohar's : \n " << endl;
            cout << "1.Standard Pack " << endl;
            cout << "\tAll basic facilities you need just for : Rs.7000.00" << endl;
            cout << "2.Premium Pack " << endl;
            cout << "\tEnjoy the Premium Pack : Rs.12000.00 " << endl;
            cout << "3.Luxury Pack " << endl;
            cout << "\t Live the Luxury at The Gulmohar's : Rs.17000.00" << endl;

            cout << "\nPress another key to back or\n Enter the package you want to book: ";
            cin >> packchoice;

            if (packchoice == 1)
            {

                hotelcost = 7000.00;
                cout << "\nYou have successfully booked Standard Pack at The Gulmohar's Hotel.  " << endl;
                cout << "Goto menu to take the receipt. " << endl;
            }
            else if (packchoice == 2)
            {

                hotelcost = 12000.00;
                cout << "\nYou have successfully booked Premium Pack at The Gulmohar's Hotel.  " << endl;
                cout << "Goto menu to take the receipt. " << endl;
            }
            else if (packchoice == 3)
            {

                hotelcost = 17000.00;
                cout << "\nYou have successfully booked Luxury Pack at The Gulmohar's Hotel.  " << endl;
                cout << "Goto menu to take the receipt. " << endl;
            }

            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu \n Please Wait!!" << endl;
                system("CLS");
                Sleep(2000);
                hotels();
            }

            int gotomenu;
            cout << "\nPress 1 to redirect to main menu : ";
            cin >> gotomenu;
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }

        if (choiceHotel == 3)
        {
            cout << "------------WELCOME TO THE HOTEL AVENDRA------------\n"
                 << endl;
            cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;

            cout << "Packages offered by The Avendra : \n " << endl;
            cout << "1.Standard Pack " << endl;
            cout << "\tAll basic facilities you need just for : Rs.9000.00" << endl;
            cout << "2.Premium Pack " << endl;
            cout << "\tEnjoy the Premium Pack : Rs.15000.00 " << endl;
            cout << "3.Luxury Pack " << endl;
            cout << "\t Live the Luxury at the Avendra : Rs.20000.00" << endl;

            cout << "\nPress another key to back or\n Enter the package you want to book: ";
            cin >> packchoice;

            if (packchoice == 1)
            {

                hotelcost = 9000.00;
                cout << "\nYou have successfully booked Standard Pack at The Avendra.  " << endl;
                cout << "Goto menu to take the receipt. " << endl;
            }
            else if (packchoice == 2)
            {

                hotelcost = 15000.00;
                cout << "\nYou have successfully booked Premium Pack at The Avendra.  " << endl;
                cout << "Goto menu to take the receipt. " << endl;
            }
            else if (packchoice == 3)
            {

                hotelcost = 20000.00;
                cout << "\nYou have successfully booked Luxury Pack at The Avendra.  " << endl;
                cout << "Goto menu to take the receipt. " << endl;
            }

            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu \n Please Wait!!" << endl;
                system("CLS");
                Sleep(2000);
                hotels();
            }

            int gotomenu;
            cout << "\nPress 1 to redirect to main menu : ";
            cin >> gotomenu;
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
    }
};
float Booking ::hotelcost;

class charges : public Booking, Cabs, Customer
{
public:
    void printBill()
    {
        ofstream outf("receipt .txt");
        {
            outf << "---------------E-VISITOR-------------------" << endl;
            outf << "---------------Receipt-------------------" << endl;
            outf << "_______________" << endl;
            outf << "Customer ID : " << Customer::cusID << endl
                 << endl;
            outf << "Description \t\t Total " << endl;
            outf << "Hotel cost:\t\t" << fixed << setprecision(2) << Booking::hotelcost << endl;
            outf << "Travel Cab cost:\t" << fixed << setprecision(2) << Cabs::lastcabCost << endl;

            outf << "_______________" << endl;
            outf << "Total Charge : \t\t " << fixed << setprecision(2) << Booking::hotelcost + Cabs::lastcabCost << endl;

            outf << "_______________" << endl;
            outf << "--------------THANK YOU-------------------" << endl;
        }
        outf.close();
    }
    void showBill()
    {
        ifstream inf("receipt.txt");
        {
            if (!inf)
            {
                cout << "File opening error!" << endl;
            }
            while (!(inf.eof()))
            {
                inf.getline(all, 999);
                cout << all << endl;
            }
        }
        inf.close();
    }
};

void menu()
{
    int mainchoice;
    int choice;
    int gotomenu;

    cout << "\t\t     * E-VISITOR * \n"
         << endl;
    cout << "\t------------------Main Menu------------------" << endl;
    cout << "\t|____________|" << endl;
    cout << "\t|\t|\t|\t|\t|\t|" << endl;
    cout << "\t|\tCustomer Management  -> 1\t|"        << endl;
    cout << "\t|\tCabs Management      -> 2\t|" << endl;
    cout << "\t|\t Bookings Management -> 3\t|" << endl;
    cout << "\t|\t Charges & Bill      -> 4\t|" << endl;
    cout << "\t|\t Exit                -> 5\t|" << endl;
    cout << "\t|\t|\t|\t|\t|\t" << endl;
    cout << "\t|____________|" << endl;

    cout << "Enter your Choice : ";
    cin >> mainchoice;
    system("CLS");

    Customer a2;
    Cabs a3;
    Booking a4;
    charges a5;
    if (mainchoice == 1)
    {
        cout << "------------CUSTOMERS--------------" << endl;
        cout << "1.Enter New Customer " << endl;
        cout << "\nEnter Choice : ";
        cin >> choice;
        system("CLS");
        if (choice == 1)
        {
            a2.getdetails();
        }
       
        else
        {
            cout << "Invalid Input! Redirecting to Previous Menu \n Please Wait!!" << endl;
            Sleep(2000);
            system("CLS");
            menu();
        }
        cout << "\n Press 1 to Redirecting main menu:";
        cin >> gotomenu;
        system("CLS");
        if (gotomenu == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    else if (mainchoice == 2)
    {
        a3.cabDetails();
    }
    else if (mainchoice == 3)
    {
        cout << "--> Book a luxury Hotel using the system <-- " << endl;
        a4.hotels();
    }
    else if (mainchoice == 4)
    {
        cout << "--> Get your Receipt <--" << endl;
        a5.printBill();

        cout << "Your receipt is already printed you can get it from file path\n"
             << endl;
        cout <<"Enter another key to back main menu: ";

        cin >> gotomenu;
        if (gotomenu == 1)
        {
            system("CLS");
            a5.showBill();
            cout << "\nPress 1 to redirect main menu: ";
            cin >> gotomenu;
            system("CLS");
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else
        {
            system("CLS");
            menu();
        }
    }
    else if (mainchoice == 5)
    {
        cout << "----GOOD BYE----" << endl;
        Sleep(2000);
        system("CLS");
        menu();
    }
    else
    {
        cout << "Invalid Input! Redirecting to Previous Menu \n Please Wait!!" << endl;
        Sleep(2000);
        system("CLS");
        menu();
    }
}

int main()
{
managemenu obj;
return 0;
}