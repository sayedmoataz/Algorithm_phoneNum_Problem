#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
struct services
{
    char ServicesName[20];
    int ServicesFreq;
    int ServicesNumber;
};
int NumberOfServices ();
void ReadData ( struct services arr[],int size);
void sortServices(struct services arr[],int size);
void GenerateRandomNumbers( struct services arr[],int size);
void AccessGeneratedRandomNumbers( struct services arr[],int size);
void PrintServices ( struct services arr[],int size);
int main()
{
    int NumOfServices = NumberOfServices();

    struct services s[NumOfServices];

    ReadData(s,NumOfServices);

    sortServices(s , NumOfServices );

    GenerateRandomNumbers(s , NumOfServices );

    AccessGeneratedRandomNumbers( s , NumOfServices );

    PrintServices ( s , NumOfServices );

    return 0;
}
int NumberOfServices ()
{
    int NumS;
    printf("enter number of services : ");
    scanf("%d",&NumS);
    return NumS;
}
void ReadData ( struct services arr[],int size)
{
    printf("services name and its frequance:\n");
    for ( int i = 0 ; i < size ; i++)
    {
        printf("service %d name : " , i+1);
        scanf("%s",&arr[i].ServicesName);
        printf("service %d frequance : " , i+1);
        scanf("%d",&arr[i].ServicesFreq);
    }
}
void sortServices( struct services arr[],int size)
{
    int temp1=0;
    char temp2[200];
    int i,j;
    for( i=0;i<size;i++)
    {
        for( j=0;j<size;j++)
        {
            if(arr[j].ServicesFreq <= arr[j+1].ServicesFreq)
            {
                strcpy(temp2,arr[j].ServicesName);
                strcpy(arr[j].ServicesName,arr[j+1].ServicesName);
                strcpy(arr[j+1].ServicesName,temp2);

                temp1=arr[j].ServicesFreq;
                arr[j].ServicesFreq=arr[j+1].ServicesFreq;
                arr[ j+1].ServicesFreq=temp1;
            }
        }
    }
}
void GenerateRandomNumbers( struct services arr[],int size)
{

    for (int i=0; i<size; i++)
     {
        if(i < 5)
            arr[i].ServicesNumber=rand()%10+1;
        else if(i < 20)
            arr[i].ServicesNumber=rand()%100+1;
        else if(i < 50 )
            arr[i].ServicesNumber=rand()%1000+1;
        else if (i < 200)
            arr[i].ServicesNumber=rand()%10000+1;
        else
            arr[i].ServicesNumber=rand()%100000+1;
     }
}
void AccessGeneratedRandomNumbers( struct services arr[],int size)
{
     int i,j,a;
     for (i = 0; i < size; ++i)
        {

            for (j = i+1 ; j < size; ++j)
            {

                if (arr[i].ServicesNumber > arr[j].ServicesNumber)
                {

                    a =  arr[i].ServicesNumber;
                    arr[i].ServicesNumber = arr[j].ServicesNumber;
                    arr[j].ServicesNumber = a;

                }
            }
        }
}
void PrintServices ( struct services arr[],int size)
{
    printf("\n**after sorting**\n");
    printf("Services number\tServices name\tServices freq\tNew Services Number\n");
    for(int i=0;i<size;i++)
    {
        printf("%-15d %-15s %-15d %-20d \n",i+1,arr[i].ServicesName,arr[i].ServicesFreq,arr[i].ServicesNumber);
    }
}
