/*
====================================================================

Steven Faulkner
A C++ program that uses vectors and structs to store detailed
information about movies.

====================================================================
*/
#include<iostream>
#include<vector>
#include<string>


using namespace std;

struct Movie{
  string Title;
  string Director;
  int ReleaseDate;
  int RunTime;
};

void getMovie(Movie &newMovie);

void displayMovie(vector <Movie> MovieList, size_t size);

int main(){

  Movie temp;
  vector<Movie> MovieList;
  char var;

  for(;;){

    getMovie(temp);
    MovieList.push_back(temp);


    cout << "Do you have another movie to enter?\n" <<endl;
    cout << "Enter y/Y or n/N: " << endl;
    cin >> var;
    cin.ignore();

      if( var == 'N' || var == 'n'){

           displayMovie(MovieList, MovieList.size());
           break;;
      }



   }
}

void getMovie(Movie &newMovie){



  cout << "Enter the movie name: " << endl;
    getline(cin,newMovie.Title);

  cout << "Enter the Director: " << endl;
    getline(cin,newMovie.Director);

  cout << "Enter the release date: " << endl;
    cin >> newMovie.ReleaseDate;

  cout << "Enter the run time: " << endl;
    cin >> newMovie.RunTime;


}

void displayMovie(vector<Movie> MovieList, size_t size){

    cout << "You entered the following movies:\n " << endl;

    for( size_t i = 0; i < size; i++){
      cout << "Movie name: " << MovieList[i].Title << endl;
      cout << "Movie Director: " << MovieList[i].Director << endl;
      cout << "Release Date: " << MovieList[i].ReleaseDate << endl;
      cout << "Run Time: " << MovieList[i].RunTime << endl;
      cout << endl;
    }
}
