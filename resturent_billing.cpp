#include <iostream>
#include <vector>
using namespace std;

void Name_of_Hotel();
void manue();
void order(vector<int> &dish, vector<int> &quantity);
void bill_calculation(vector<int> &dish, vector<int> &quantity);
int main()
{
    vector<int> dish;
    vector<int> quantity;
    Name_of_Hotel();
    manue();
    order(dish, quantity);
    bill_calculation(dish, quantity);
}
void Name_of_Hotel()
{

    cout << "                                                 =====================================================================" << endl;
    cout << "                                                 =====================================================================" << endl;
    cout << "                                                 ||                                                                 ||" << endl;
    cout << "                                                 ||                   WELCOME TO TAG RESTRAUTANT                    ||" << endl;
    cout << "                                                 ||                                                                 ||" << endl;
    cout << "                                                 =====================================================================" << endl;
    cout << "                                                 =====================================================================" << endl;
}

void manue()
{
    cout << endl
         << endl;
    cout << "==========================================================" << endl;
    cout << "||                        MANUE                         ||" << endl;
    cout << "==========================================================" << endl;
    cout << "**********************************************************" << endl;
    cout << "**********************************************************" << endl;
    cout << "**                                                      **" << endl;
    cout << "**  1 : Kabab ---------------------------------Rs 350   **" << endl;
    cout << "**  2 : Tikka----------------------------------Rs 300   **" << endl;
    cout << "**  3 : Chapati -------------------------------Rs 15    **" << endl;
    cout << "**  4 : Naan ----------------------------------Rs 20    **" << endl;
    cout << "**  5 : Tea -----------------------------------Rs 70    **" << endl;
    cout << "**  6 : Chicken Karahi ------------------------Rs 1400  **" << endl;
    cout << "**  7 : Qourma --------------------------------Rs 1200  **" << endl;
    cout << "**  8 : Fish ----------------------------------Rs 1400  **" << endl;
    cout << "**  9 : Finger fish ---------------------------Rs 1600  **" << endl;
    cout << "**  10 : Mutton  Karahi -----------------------Rs 2000  **" << endl;
    cout << "**                                                      **" << endl;
    cout << "**            PRESS 0 FOR BILL                          **" << endl;
    cout << "**********************************************************" << endl;
    cout << "**********************************************************" << endl;
}

void order(vector<int> &dish, vector<int> &quantity)
{

    int select_dish;
    int dish_quantity;

    do
    {

        cout << "\nWhat would you like to order      :  ";
        cin >> select_dish;
        if (0 > select_dish || select_dish > 10)
        {
            cout << "you entered the wrong input . Please select again" << endl;
            continue;
        }
        if (select_dish == 0)
        {
            break;
        }
        cout << "Enter the quantity of desire meal : ";
        cin >> dish_quantity;
        dish.push_back(select_dish);
        quantity.push_back(dish_quantity);
    } while (select_dish != 0);
}
void bill_calculation(vector<int> &dish, vector<int> &quantity)
{

 

    int i = 0;
    int one_dish_bill = 0;
    int total_bill = 0;
    cout<<"\n\n\n\n";
    cout << "******************************************************************************************************************" << endl;
    cout << "|                                                 || BILL||                                                      |" << endl;
    cout << "******************************************************************************************************************" << endl;
    cout << "|    Name              |           Price          |         Quantity           |          Bill                   |" << endl;
    cout << "******************************************************************************************************************" << endl;
    while (i != dish.size())
    {
        if (dish[i] == 1)
        {
            one_dish_bill = 350 * quantity[i];
            total_bill = total_bill + one_dish_bill;

            cout << "*    Kabab                         350                         " << quantity[i] << "                         " << one_dish_bill <<"       "<< endl;
            one_dish_bill = 0;
        }

        if (dish[i] == 2)
        {
            one_dish_bill = 300 * quantity[i];
            total_bill = total_bill + one_dish_bill;

            cout << "*    Tikka                         300                         " << quantity[i] << "                         " << one_dish_bill <<"       " << endl;
            one_dish_bill = 0;
        }

        if (dish[i] == 3)
        {
            one_dish_bill = 10 * quantity[i];
            total_bill =  total_bill + one_dish_bill;

            cout << "*    CHAPATI                       10                          " << quantity[i] << "                         " << one_dish_bill <<"       " <<endl;
            one_dish_bill = 0;
        }
        if (dish[i] == 4)
        {
            one_dish_bill = 20 * quantity[i];
            total_bill = total_bill + one_dish_bill;

            cout << "*    Naan                          20                          " << quantity[i] << "                         " << one_dish_bill <<"       " <<endl;
            one_dish_bill = 0;              
        }
        if (dish[i] == 5)
        {
            one_dish_bill = 70 * quantity[i];
            total_bill = total_bill + one_dish_bill;

            cout << "*    Tea                           70                          " << quantity[i] << "                         " << one_dish_bill <<"       " << endl;
            one_dish_bill = 0;
        }
        if (dish[i] == 6)              
        {
            one_dish_bill = 1400 * quantity[i];
            total_bill = total_bill + one_dish_bill;

            cout << "*    Chicken Karahi                1400                        " << quantity[i] << "                         " << one_dish_bill <<"       " <<endl;
            one_dish_bill = 0;
        }
        if (dish[i] == 7)
        {
            one_dish_bill = 1200 * quantity[i];
            total_bill = total_bill + one_dish_bill;

            cout << "*    Qourma                        200                         " << quantity[i] << "                         " << one_dish_bill <<"       " << endl;
            one_dish_bill = 0;
        }
        if (dish[i] == 8)
        {
            one_dish_bill = 1400 * quantity[i];
            total_bill = total_bill + one_dish_bill;

            cout << "*    Fish                          1400                        " << quantity[i] << "                         " << one_dish_bill <<"       " << endl;
            one_dish_bill = 0;
        }
        if (dish[i] == 9)
        {
            one_dish_bill = 1600 * quantity[i];
            total_bill = total_bill + one_dish_bill;

            cout << "*    Fish Finger                   1600                        " << quantity[i] << "                         " << one_dish_bill <<"       " <<endl;
            one_dish_bill = 0;
        }
        if (dish[i] == 10)
        {
            one_dish_bill = 2000 * quantity[i];
            total_bill = total_bill + one_dish_bill;

            cout << "*    Mutton Karahi                 2000                        " << quantity[i] << "                         " << one_dish_bill <<"       " << endl;
            one_dish_bill = 0;
        }
        i++;
    }
    cout << "******************************************************************************************************************" << endl;
    cout << " TOTAL BILL                                                                              " << total_bill<<"                     |"<<endl;
    cout << "******************************************************************************************************************" << endl;
}
