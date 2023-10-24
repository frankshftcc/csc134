#include <iostream>

using namespace std;

/*
CSC 134
M1HW1 - Movie Talk
franksh
9/5
Movie discussion.
*/
int main()
{
 string movie = "Owls of Ga'hoole";
 int year = 2010;
 int cost = 80;
 int income = 140;
 double rating = 5.7;
 cout << "My favorite movie is called \"Legends of the Guardians: The " << movie << "\"." << endl;
 cout << "The movie was released in " << year << " and had a budget of $" << cost << " million." << endl;
 cout << "It generated $" << income << " in gross revenue, meaning it had a net revenue of $" << income - cost << " million." << endl;
 cout << "On Rotten Tomatoes, it was given a rating of " << rating << " out of 10." << endl;
 cout << "It's a movie based upon a book series with the same name, one I read while I was in Middle School. That being said, the movie is aimed at kids with a traditional hero vs. the bad guy story." << endl;
 cout << "The characters would often use silly wordplay since they were owls; one of which being \"Feel it in your gizzard!\" as a reference to \"feel it in your heart\"." << endl;
 cout << " Despite being a kids movie, it had some really dark themes; child kidnapping, (child) slavery, racism/racial supremacy, and war... Bit dark for a kids movie!" << endl;
 cout << "The movie had amazing visuals for its time, but critics say that it was bogged down by poor writing. This likely contributed to its score of " << rating << "." << endl;
 cout << "I personally enjoyed the movie, but I think it's a poor representation of the book series." << endl;
 return 0;
}
