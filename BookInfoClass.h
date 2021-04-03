#include <iostream>
#include <string>
using namespace std;

// define the BookInfo class below

#ifndef BookInfoClass_h
#define BookInfoClass_h

class BookInfo {
private:
   string title;
   string author;
   int yearPublished;
public:
   BookInfo();
   BookInfo(string, string, int);
   string getTitle(); // -- return the title of a book
   string getAuthor(); //-- return the author
   int getYearPublished(); //-- return the year of publication
   void setTitle(string); //-- set the title of a book via the input string parameter
   void setAuthor(string); // -- set the author
   void setYearPublished(int); // -- set year published
   void printOut();
};

#endif