#include<stdio.h>
struct Vehicle
{
    char Vehical_number[20];
    char Vehicle_category[20];
    char Fuel_type[10];
};
int main()
{
    struct Vehicle vehical;
    struct Vehicle *vehicle_pointer=&vehical;
    scanf("%[^\n]s",vehicle_pointer->Vehical_number);
    scanf("%s",vehicle_pointer->Vehicle_category);
    scanf("%s",vehicle_pointer->Fuel_type);
    printf("Vehical number is %s\nCategory of vehicle is %s\n Vehicle fuel type is %s\n",vehicle_pointer->Vehical_number,vehicle_pointer->Vehicle_category,vehicle_pointer->Fuel_type);
    return 0;
}
