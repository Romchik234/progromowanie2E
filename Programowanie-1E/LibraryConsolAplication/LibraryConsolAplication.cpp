#include <iostream>
using namespace std;

struct book
{
    std::string title;
    std::string author;
    short publicationYear;
    unsigned short numerOfPages;
};

void menu()
{
    system("cls");
    std::cout << "BIBLIOTEKA\n";
    std::cout << "1.Dodanoe nowej ksia�ki \n";

    std::cout << "0.Koniec programu\n";

}

int getOption()
{
    cout << "Wybirze opcj�\n";
    int option;
    cin >> option;
    return option; 
}

void addNewBook(collectionOfBooks,currentNumberOfBooks)
{
    
}

int main()
{
    const int BOOK_SIZE = 100;
    book collectionOfBooks[BOOK_SIZE];
    int currentNumberOfBooks = 0;

    while(true)
    {
        menu();
        int choosenOption = getOption();

        if (choosenOption == 0)
            break;

        switch (choosenOption)
        {
        case 1: 
            addNewBook(collectionOfBooks, currentNumberOfBooks);
            break;
        }
    }
}
