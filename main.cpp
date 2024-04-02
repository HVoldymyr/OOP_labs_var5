#include <iostream> 
#include <fstream> 
#include <string> 
#include <vector> 
#include <algorithm> 

using namespace std;

const int MAX_BOOKS = 10;

struct Book
{
    string author;
    string publisher;
    int thombs = 0;
    string libCode;
};

Book books[MAX_BOOKS];
int numBooks = 0;

void AddBook()
{
    if (numBooks < MAX_BOOKS)
    {
        Book newBook;
        cout << "Enter author: ";
        cin >> newBook.author;
        cout << "Enter publisher: ";
        cin >> newBook.publisher;
        cout << "Enter number of thombs: ";
        cin >> newBook.thombs;
        cout << "Enter library code: ";
        cin >> newBook.libCode;

        books[numBooks++] = newBook;
        cout << "Book added." << endl;
    }
    else
    {
        cout << "Maximum number of books reached. \n";
    }
}

void DeleteBook(const string& authorName)
{
    bool bookDeleted = false;

    for (int i = 0; i < numBooks; ++i)
    {
        if (books[i].author == authorName)
        {
            for (int j = i; j < numBooks - 1; ++j)
            {
                books[j] = books[j + 1];
            }
            --numBooks;
            cout << "Book by author " << authorName << " deleted." << endl;
            bookDeleted = true;
            break;
        }
    }

    if (!bookDeleted)
    {
        cout << "Book by author " << authorName << " not found." << endl;
    }
}

void ModifyBook(const string& authorName)
{
    bool bookModified = false;

    for (int i = 0; i < numBooks; ++i)
    {
        if (books[i].author == authorName)
        {
            cout << "Enter new author: ";
            cin >> books[i].author;
            cout << "Enter new publisher: ";
            cin >> books[i].publisher;
            cout << "Enter new number of thombs: ";
            cin >> books[i].thombs;
            cout << "Enter new library code: ";
            cin >> books[i].libCode;
            cout << "Book information modified successfully.\n";
            bookModified = true;
            break;
        }
    }

    if (!bookModified)
    {
        cout << "Book by author " << authorName << " not found." << endl;
    }
}

void SortBook()
{
    for (int i = 0; i < numBooks - 1; ++i)
    {
        for (int j = 0; j < numBooks - i - 1; ++j)
        {
            if (books[j].thombs < books[j + 1].thombs)
            {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

void SaveBookToFile()
{
    ofstream outFile("book.bin", ios::binary | ios::out);
    if (!outFile)
    {
        cout << "Unable to open file.\n";
        return;
    }

    outFile.write((char*)&numBooks, sizeof(numBooks));
    outFile.write((char*)books, numBooks * sizeof(Book));
    outFile.close();
    cout << "Books saved to file successfully.\n";
}

void LoadBooksFromFile()
{
    ifstream inFile("book.bin", ios::binary | ios::in);
    if (!inFile)
    {
        cout << "Unable to open file or file does not exist.\n";
        return;
    }

    inFile.read((char*)&numBooks, sizeof(numBooks));
    inFile.read((char*)books, numBooks * sizeof(Book));
    inFile.close();

    cout << "Books loaded from file successfully.\n";
}

void ShowBook()
{
    for (int i = 0; i < numBooks; ++i)
    {
        cout << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Publisher: " << books[i].publisher << endl;
        cout << "Thombs: " << books[i].thombs << endl;
        cout << "Library Code: " << books[i].libCode << endl;
    }
}

int main()
{
    int choice;

    LoadBooksFromFile();

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Show library\n";
        cout << "2. Add book\n";
        cout << "3. Delete book\n";
        cout << "4. Modify book info\n";
        cout << "5. Sort books by thombs\n";
        cout << "6. Save book to file\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch
            (choice)
        {

        case 1:
            ShowBook();
            break;

        case 2:
            AddBook();
            break;

        case 3:
        {
            string authorToDelete;
            cout << "Enter author name to delete: ";
            cin >> authorToDelete;
            DeleteBook(authorToDelete);
            break;
        }

        case 4:
        {
            string authorToModify;
            cout << "Enter author name to modify: ";
            cin >> authorToModify;
            ModifyBook(authorToModify);
            break;
        }

        case 5:
            SortBook();
            cout << "Books are sorted by the largest number of thombs.\n";
            break;

        case 6:
            SaveBookToFile();
            break;

        case 7:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 7);

    return 0;
}
