#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

  struct building
    {
        /* data */
        int floor;
        int len, wid;
        int room;
        string name;
        string location;        

        // memeber functions
        float floorArea();
        int totalRooms();

        void enterSpecs();
        void printSpecs();
    };

        void enterSpecs(building arr[],int n)
        {
            cin.ignore();
            for(int i=1; i<=n; i++){
                cout<<"\n Enter the name of building "<<i<<": ";
                getline(cin,(arr[i].name));
                cout<<"\n Enter the number of floors and rooms per floor: ";
                cin>>arr[i].floor>>arr[i].room;
                cout<<"\n Enter the length and breadth of building: ";
                cin>>arr[i].len>>arr[i].wid;
                cin.ignore(256,'\n');
                cout<<"\n Enter the location: ";                
                getline(cin,(arr[i].location));
            }
        }


        float floorArea(building arr,int n){
            for(int i=1; i<=n; i++){
            return (arr.len)*(arr.wid);
            }
        }

        int totalRooms(building arr,int n){
            for(int i=1; i<=n; i++){
            return (arr.floor)*(arr.room);
            }
        }

    void printSpecs(building arr[],int n)
    {
        cout<<"\n Enter the number of buildings: ";
        cin>>n;
            for(int i=1; i<=n; i++){
                float area=floorArea(arr[i], n);
                int room=totalRooms(arr[i],n);
                cout<<"\n Name of building "<<i<<": ";
                cout<<arr[i].name;
                cout<<"\n Total number of rooms: ";
                cout<<room;
                cout<<"\n Area of the building: ";
                cout<<area;
                cout<<"\n "<<arr[i].name<<" Location: ";
                cout<<arr[i].location;
            }
    }

    int main()
    {   int n;
        building arr[10];
        cout<<"\n Enter the number of buildings: ";
        cin>>n;
        enterSpecs(arr,n);
        printSpecs(arr,n);
    }
