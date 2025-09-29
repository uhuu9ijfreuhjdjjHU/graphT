
using namespace std;
#include <iostream>

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
  int x = 5; //x & y axis
  int y = 5;
  
  int center[2] = {(y/2),(x/2)}; //center coordinate's

  int graphPlot[x][y] = {0}; //initialise all locations in array to 0

  int xChoose = 0; //player assigned plot locations
  int yChoose = 0;

  cout<<"plot x and or y, enter 0 to not plot."<<endl<<"x: ";
  cin>>xChoose;
  
  cout<<"y; ";
  cin>>yChoose;

  graphPlot[center[0] - yChoose][center[1] + xChoose] = 1;
   
  graphPlot[center[0]][center[1]] = 1;

  while (true)
  {
    cout<<"|";

    for (int i = 0; i < x; i++)
    { 
      for (int j = 0; j < y; j++)
      {
        if (graphPlot[i][j] == 1)
        {
          cout<<"*";
        }
        else if (j == (y/2))
        {
          cout<<"|";
        }
        else if (i == (x/2) || graphPlot[i][j] == 0)
        {
          cout<<"-";
        }
        if ((j + 1) != (y/2) && j != (y/2))
        {
          cout<<"|";
        }
      }
      
      if (i == 4)
      {
        break;
      } 
      
      cout<<endl<<"|";
    }
    break;
  }
}
