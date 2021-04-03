//include the BookInfoClass.h here
#include "BookInfoClass.h"
//provide the implementation of the member functions of the BookInfo class below
#include <iostream>
#include <string>

using namespace std;

BookInfo::BookInfo() {
   title = "Unknown";
   author = "Unknown";
   yearPublished = 2021;
}

BookInfo::BookInfo(string inTitle, string inAuthor, int year) {
   title = inTitle;
   author = inAuthor;
   yearPublished = year;
}

string BookInfo::getTitle() {
   return title;
} // -- return the title of a book


string BookInfo::getAuthor() {
   return author;
} //-- return the author

int BookInfo::getYearPublished() {
   return yearPublished;
}//-- return the year of publication

void BookInfo::setTitle(string inTitle) {
   title = inTitle;
} //-- set the title of a book via the input string parameter

void BookInfo::setAuthor(string inAuthor) {
   author = inAuthor;
} // -- set the author

void BookInfo::setYearPublished(int year) {
   yearPublished = year;
} // -- set year published

void BookInfo::printOut() {
   cout << "Title: " << title << ", Author: " << author << ", Year of Publication: " << yearPublished << endl;
}