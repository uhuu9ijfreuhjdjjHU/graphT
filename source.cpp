using namespace std;
#include <cmath>
#include <iostream>
#include <cstdlib>

void printBoxGraph(int displayNumber)
{
  if (displayNumber == 0)
  {
    cout<<"| ";
  }
  else if (displayNumber == 1)
  {
    cout<<"|*";
  }
}

int main()
{

  int xChoose = 0; //player assigned plot locations
  int yChoose = 0;

  cout<<"plot x and or y, enter 0 to not plot."<<endl<<"x: ";
  cin>>xChoose;
  
  cout<<"y; ";
  cin>>yChoose;
  
  int x = 5;
  int y = 5;

  if (xChoose>(x-1)/2 || xChoose<-1*((x-1)/2))
  {
    x = abs(xChoose) * 2 + 1;
  }
  if (xChoose>(y-1)/2 || yChoose<-1*((y-1)/2))
  {
    y = abs(xChoose) * 2 + 1;
  }

  int center[2] = {(y/2),(x/2)}; //center coordinate's

  int graphPlot[x][y] = {0}; //initialise all locations in array to 0



  graphPlot[center[0] - yChoose][center[1] + xChoose] = 1; //equation to take player input and plot
   
  graphPlot[center[0]][center[1]] = 1; //center plot

  while (true)
  {
    for (int i = 0; i < y; i++)  // rows
    { 
      for (int j = 0; j < x; j++)  // columns
      {
        if (graphPlot[i][j] == 1)
        {
          cout << "*";
        }
        else
        {
          cout << "-";
        }
      }
    cout << endl;
    }
  break;}
}
