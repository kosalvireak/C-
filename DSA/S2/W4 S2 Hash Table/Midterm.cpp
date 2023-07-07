#include <iostream>
#include <list>
using namespace std;
class Hash
{
    int BUCKET;
    list<int> *Table;

public:
    Hash(int maxSize);
    void insert_Separate_Chaining(int arr[]);
    void insert_Linear_Probing(int arr[]);
    void insert_Quadratic_Probing(int arr[]);

    void display();
    int hashFunction(int x)
    {
        return (x % BUCKET);
    }
};

Hash::Hash(int maxSize)
{
    this->BUCKET = maxSize;
    Table = new list<int>[BUCKET];
}

void Hash::insert_Linear_Probing(int *arr)
{
    for (int i = 0; i <= BUCKET - 1; i++)
    {
        if (arr[i] != 0)
        {
            int index = hashFunction(arr[i]);
            if (index > BUCKET - 1)
                index = 0;
            while (!Table[index].empty() && index < BUCKET)
            {
                index++;
                if (index > BUCKET - 1)
                    index = 0;
            }
            if (Table[index].empty())
                Table[index].push_back(arr[i]);
        }
    }
    display();
}

void Hash::insert_Quadratic_Probing(int *arr)
{
    for (int i = 0; i <= BUCKET - 1; i++)
    {
        if (arr[i] != 0)
        {
            int index = hashFunction(arr[i]);
            if (index > BUCKET - 1)
                index = 0;
            int j = 0;
            while (!Table[index].empty())
            {
                index = index + (j * j) % BUCKET;
                j++;
                if (index > BUCKET - 1)
                    index = 0;
            }
            if (Table[index].empty())
                Table[index].push_back(arr[i]);
        }
    }
    display();
}

void Hash::insert_Separate_Chaining(int *arr)
{
    for (int i = 0; i <= BUCKET - 1; i++)
    {
        if (arr[i] != 0)
        {
            int index = hashFunction(arr[i]);
            Table[index].push_back(arr[i]);
        }
    }
    display();
}

void Hash::display()
{
    for (int i = 0; i < BUCKET; i++)
    {
        cout << i;
        for (auto x : Table[i])
            cout << " --> " << x;
        cout << endl;
    }
}

int main()
{
    system("cls");
    Hash hash = Hash(10);
    int arr[] = {4371, 1323, 6173, 4199, 4344, 9679, 1989, 0, 0, 0};
    cout << "Linear probing hash-table\n";
    hash.insert_Linear_Probing(arr);

    // cout << "\nQuadratic probing hash-table\n";
    // hash.insert_Quadratic_Probing(arr);

    // cout << "\nSeparate chaining hash-table\n";
    // hash.insert_Separate_Chaining(arr);

    return 0;
}