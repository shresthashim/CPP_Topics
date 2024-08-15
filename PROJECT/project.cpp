#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

const int MAX_CUSTOMERS = 100;

class CustomerDetails
{
public:
    string roomnumber;
    string name;
    string address;
    string phonenumber;
    string nationality;
    string email;
    string period;
    string arrivaldate;

    friend ostream &operator<<(ostream &os, const CustomerDetails &customer);
    friend istream &operator>>(istream &is, CustomerDetails &customer);
};

ostream &operator<<(ostream &os, const CustomerDetails &customer)
{
    os << "----------------------------\n";
    os << "Room Number: " << customer.roomnumber << "\n"
       << "Name: " << customer.name << "\n"
       << "Address: " << customer.address << "\n"
       << "Phone Number: " << customer.phonenumber << "\n"
       << "Nationality: " << customer.nationality << "\n"
       << "Email: " << customer.email << "\n"
       << "Period: " << customer.period << "\n"
       << "Arrival Date: " << customer.arrivaldate << "\n";
    os << "----------------------------\n";
    return os;
}

istream &operator>>(istream &is, CustomerDetails &customer)
{
    cout << "Enter Room Number: ";
    is >> customer.roomnumber;
    cout << "Enter Full Name: ";
    is.ignore();
    getline(is, customer.name);
    cout << "Enter Address: ";
    getline(is, customer.address);
    cout << "Enter Phone Number: ";
    is >> customer.phonenumber;
    cout << "Enter Nationality: ";
    is >> customer.nationality;
    cout << "Enter Email: ";
    is >> customer.email;
    cout << "Enter Period (days): ";
    is >> customer.period;
    cout << "Enter Arrival Date (dd-mm-yyyy): ";
    is >> customer.arrivaldate;

    return is;
}

class HotelManagement
{
private:
    CustomerDetails customers[MAX_CUSTOMERS];
    int customerCount = 0;

    void loadCustomers()
    {
        ifstream file("customers.txt");
        if (!file.is_open())
        {
            ofstream outfile("customers.txt");
            outfile.close();
            return;
        }
        while (file >> customers[customerCount].roomnumber >> customers[customerCount].name >> customers[customerCount].address >>
               customers[customerCount].phonenumber >> customers[customerCount].nationality >> customers[customerCount].email >>
               customers[customerCount].period >> customers[customerCount].arrivaldate)
        {
            customerCount++;
            if (customerCount >= MAX_CUSTOMERS)
                break;
        }
        file.close();
    }

    void saveCustomers()
    {
        ofstream file("customers.txt");
        if (!file.is_open())
        {
            throw runtime_error("Unable to open file");
        }
        for (int i = 0; i < customerCount; i++)
        {
            file << customers[i].roomnumber << " " << customers[i].name << " " << customers[i].address << " "
                 << customers[i].phonenumber << " " << customers[i].nationality << " " << customers[i].email << " "
                 << customers[i].period << " " << customers[i].arrivaldate << "\n";
        }
        file.close();
    }

public:
    HotelManagement()
    {
        loadCustomers();
    }

    ~HotelManagement()
    {
        saveCustomers();
    }

    void addCustomer()
    {
        if (customerCount >= MAX_CUSTOMERS)
        {
            cout << "Error: Maximum customer limit reached!" << endl;
            return;
        }

        CustomerDetails customer;
        cin >> customer;

        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].roomnumber == customer.roomnumber)
            {
                cout << "----------------------------\n";
                cout << "Error: Room number " << customer.roomnumber << " is already booked!\n";
                cout << "----------------------------\n";
                return;
            }
        }

        customers[customerCount++] = customer;
        cout << "----------------------------\n";
        cout << "Customer added successfully!\n";
        cout << "----------------------------\n";
    }

    void listCustomers() const
    {
        for (int i = 0; i < customerCount; i++)
        {
            cout << customers[i] << endl;
        }
    }

    void searchCustomer() const
    {
        string roomnumber;
        cout << "Enter Room Number to search: ";
        cin >> roomnumber;

        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].roomnumber == roomnumber)
            {
                cout << customers[i] << endl;
                return;
            }
        }

        cout << "----------------------------\n";
        cout << "Customer not found!\n";
        cout << "----------------------------\n";
    }

    void deleteCustomer()
    {
        string roomnumber;
        cout << "Enter Room Number to delete: ";
        cin >> roomnumber;

        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].roomnumber == roomnumber)
            {
                for (int j = i; j < customerCount - 1; j++)
                {
                    customers[j] = customers[j + 1];
                }
                customerCount--;
                cout << "----------------------------\n";
                cout << "Customer deleted successfully!\n";
                cout << "----------------------------\n";
                return;
            }
        }

        cout << "----------------------------\n";
        cout << "Customer not found!\n";
        cout << "----------------------------\n";
    }

    void updateCustomer()
    {
        string roomnumber;
        cout << "Enter Room Number to update: ";
        cin >> roomnumber;

        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].roomnumber == roomnumber)
            {
                cout << "Current details:\n"
                     << customers[i] << endl;
                cout << "Enter new details:\n";
                cin >> customers[i];
                cout << "Customer details updated successfully!" << endl;
                return;
            }
        }

        cout << "----------------------------\n";
        cout << "Customer not found!\n";
        cout << "----------------------------\n";
    }
};

bool login(string &role)
{
    string username, password;
    cout << "==========LOGIN==========\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "admin123")
    {
        role = "admin";
        return true;
    }
    else if (username == "user" && password == "user123")
    {
        role = "user";
        return true;
    }
    else
    {
        cout << "Invalid username or password!" << endl;
        return false;
    }
}

int main()
{
    HotelManagement hotel;
    string role;

    if (!login(role))
    {
        return 1;
    }

    while (true)
    {
        cout << "\n============================\n";
        cout << "    Hotel Management System\n";
        cout << "============================\n";
        cout << "1. Add Customer\n";
        cout << "2. List Customers\n";
        cout << "3. Search Customer\n";
        cout << "4. Delete Customer\n";
        cout << "5. Update Customer\n";
        cout << "6. Exit\n";
        cout << "============================\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (role == "admin")
            {
                hotel.addCustomer();
            }
            else
            {
                cout << "Access denied! Only admin can add customers." << endl;
            }
            break;
        case 2:
            hotel.listCustomers();
            break;
        case 3:
            hotel.searchCustomer();
            break;
        case 4:
            if (role == "admin")
            {
                hotel.deleteCustomer();
            }
            else
            {
                cout << "Access denied! Only admin can delete customers." << endl;
            }
            break;
        case 5:
            if (role == "admin")
            {
                hotel.updateCustomer();
            }
            else
            {
                cout << "Access denied! Only admin can update customers." << endl;
            }
            break;
        case 6:
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }
}
